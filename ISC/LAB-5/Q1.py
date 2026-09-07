# AI 331 - Information Security and Cryptography
# Lab Assignment 5
# Hill Cipher

import numpy as np

def get_key_matrix(row1, row2):
    K = np.array([row1, row2])
    return K


def show_key_matrix(K):
    print("\n2 x 2 Key Matrix:")
    for row in K:
        print(" ".join(str(x) for x in row))


def text_to_numbers(text):
    text = text.upper().replace(" ", "")
    nums = [ord(ch) - ord('A') for ch in text if ch.isalpha()]
    return text.replace(" ", ""), nums


def make_blocks(nums):
    # Pad with 'X' (23) if odd length
    if len(nums) % 2 != 0:
        nums.append(ord('X') - ord('A'))
    blocks = []
    for i in range(0, len(nums), 2):
        blocks.append([nums[i], nums[i + 1]])
    return blocks


def mod_inverse(a, m):
    # Extended Euclidean to find modular inverse of a mod m
    for x in range(1, m):
        if (a * x) % m == 1:
            return x
    return None


def matrix_mod_inverse(K, m=26):
    det = int(round(np.linalg.det(K))) % m
    det = det % m
    det_inv = mod_inverse(det, m)

    if det_inv is None:
        print("Key matrix is not invertible mod 26!")
        return None

    # Adjugate of 2x2 matrix: swap diagonal, negate off-diagonal
    adj = np.array([[K[1][1], -K[0][1]],
                    [-K[1][0],  K[0][0]]])

    inv = (det_inv * adj) % m
    return inv.astype(int)


def encrypt(blocks, K):
    enc_blocks = []
    for block in blocks:
        vec = np.array(block)
        result = K.dot(vec) % 26
        enc_blocks.append(result.tolist())
    return enc_blocks


def decrypt(enc_blocks, K_inv):
    dec_blocks = []
    for block in enc_blocks:
        vec = np.array(block)
        result = K_inv.dot(vec) % 26
        dec_blocks.append(result.tolist())
    return dec_blocks


def blocks_to_text(blocks):
    text = ""
    for block in blocks:
        for num in block:
            text += chr(int(num) + ord('A'))
    return text


# ---------------- MAIN PROGRAM ----------------

print("===== HILL CIPHER =====")

# 1. Key Matrix (user input)
print("\nEnter 2x2 Key Matrix row by row (space-separated integers):")
row1 = list(map(int, input("Row 1: ").split()))
row2 = list(map(int, input("Row 2: ").split()))
K = get_key_matrix(row1, row2)
show_key_matrix(K)

# 2. Plaintext (user input)
plaintext = input("\nEnter plaintext: ")
print("Plaintext:", plaintext)

# Convert to numbers
clean_text, nums = text_to_numbers(plaintext)
print("Cleaned Text:", clean_text)
print("Numerical Values:", nums)

# 3. Make 2-letter blocks
blocks = make_blocks(nums)
print("\nPlaintext Blocks:", [clean_text[i*2:i*2+2] for i in range(len(blocks))])

# 4 & 5. Encrypt
enc_blocks = encrypt(blocks, K)
print("\nEncrypted Numerical Blocks:", enc_blocks)
ciphertext = blocks_to_text(enc_blocks)
print("Ciphertext:", ciphertext)

# 6. Modular Inverse of Key Matrix
K_inv = matrix_mod_inverse(K)
print("\nModular Inverse of Key Matrix (mod 26):")
for row in K_inv:
    print(" ".join(str(x) for x in row))

# 7 & 8. Decrypt and verify
dec_blocks = decrypt(enc_blocks, K_inv)
decrypted = blocks_to_text(dec_blocks)
print("\nDecrypted Text:", decrypted)
print("Original (cleaned):", clean_text)
print("Verified:", decrypted == clean_text or decrypted.startswith(clean_text))
