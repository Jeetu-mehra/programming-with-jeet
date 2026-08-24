# PART 1: BRUTE FORCE CAESAR CIPHER

def caesar_decrypt(text, key):
    result = ""

    for ch in text:
        if ch.isupper():
            result += chr((ord(ch) - ord('A') - key) % 26 + ord('A'))
        elif ch.islower():
            result += chr((ord(ch) - ord('a') - key) % 26 + ord('a'))
        else:
            result += ch

    return result


def brute_force_caesar(ciphertext):
    print("All possible decryptions:\n")

    for key in range(1, 26):
        print("Key", key, ":", caesar_decrypt(ciphertext, key))


print("===== CAESAR CIPHER =====")

ciphertext = input("Enter Caesar ciphertext: ")

brute_force_caesar(ciphertext)