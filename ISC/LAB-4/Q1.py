# AI 331 - Information Security and Cryptography
# Lab Assignment 4
# Playfair Cipher

def make_matrix(key):
    key = key.upper().replace("J", "I")

    s = ""

    # Add key characters
    for ch in key:
        if ch.isalpha() and ch not in s:
            s += ch

    # Add remaining alphabet
    for ch in "ABCDEFGHIKLMNOPQRSTUVWXYZ":
        if ch not in s:
            s += ch

    # Create 5x5 matrix
    mat = []
    for i in range(0, 25, 5):
        mat.append(list(s[i:i+5]))

    return mat


def show_matrix(mat):
    print("\n5 x 5 Key Matrix:")
    for row in mat:
        print(" ".join(row))


def format_text(text):
    text = text.upper().replace("J", "I")

    # Remove spaces and non-alphabetic characters
    s = ""
    for ch in text:
        if ch.isalpha():
            s += ch

    pairs = []
    i = 0

    while i < len(s):
        a = s[i]

        if i + 1 == len(s):
            pairs.append(a + "X")
            i += 1

        elif s[i] == s[i + 1]:
            pairs.append(a + "X")
            i += 1

        else:
            pairs.append(a + s[i + 1])
            i += 2

    return pairs


def find_pos(mat, ch):
    for r in range(5):
        for c in range(5):
            if mat[r][c] == ch:
                return r, c


def encrypt_pair(a, b, mat):
    r1, c1 = find_pos(mat, a)
    r2, c2 = find_pos(mat, b)

    # Same row
    if r1 == r2:
        return mat[r1][(c1 + 1) % 5] + mat[r2][(c2 + 1) % 5]

    # Same column
    elif c1 == c2:
        return mat[(r1 + 1) % 5][c1] + mat[(r2 + 1) % 5][c2]

    # Rectangle
    else:
        return mat[r1][c2] + mat[r2][c1]


def decrypt_pair(a, b, mat):
    r1, c1 = find_pos(mat, a)
    r2, c2 = find_pos(mat, b)

    # Same row
    if r1 == r2:
        return mat[r1][(c1 - 1) % 5] + mat[r2][(c2 - 1) % 5]

    # Same column
    elif c1 == c2:
        return mat[(r1 - 1) % 5][c1] + mat[(r2 - 1) % 5][c2]

    # Rectangle
    else:
        return mat[r1][c2] + mat[r2][c1]


# ---------------- MAIN PROGRAM ----------------

print("===== PLAYFAIR CIPHER =====")

key = input("Enter key: ")
text = input("Enter plaintext: ")

# 1. Create matrix
mat = make_matrix(key)

show_matrix(mat)

# 2. Format plaintext
pairs = format_text(text)

print("\nPlaintext Digraphs:")
print(" ".join(pairs))

# 3. Encrypt
cipher = ""

for p in pairs:
    cipher += encrypt_pair(p[0], p[1], mat)

print("\nCiphertext:", cipher)

# 4. Decrypt
plain = ""

for i in range(0, len(cipher), 2):
    plain += decrypt_pair(cipher[i], cipher[i + 1], mat)

print("Decrypted :", plain)