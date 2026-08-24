# PART 2: MONOALPHABETIC SUBSTITUTION CIPHER


def mono_encrypt(text, key):
    result = ""

    for ch in text:
        if ch.isupper():
            result += key[ord(ch) - ord('A')]
        elif ch.islower():
            result += key[ord(ch) - ord('a')].lower()
        else:
            result += ch

    return result


def mono_decrypt(text, key):
    result = ""
    rev = {}

    for i in range(26):
        rev[key[i]] = chr(ord('A') + i)

    for ch in text:
        if ch.isupper():
            result += rev[ch]
        elif ch.islower():
            result += rev[ch.upper()].lower()
        else:
            result += ch

    return result


print("===== MONOALPHABETIC SUBSTITUTION CIPHER =====")

key = "QWERTYUIOPASDFGHJKLZXCVBNM"

print("Substitution Key:", key)

text = input("Enter patient data / diagnostic note: ")

encrypted = mono_encrypt(text, key)
decrypted = mono_decrypt(encrypted, key)

print("\nOriginal :", text)
print("Encrypted:", encrypted)
print("Decrypted:", decrypted)
