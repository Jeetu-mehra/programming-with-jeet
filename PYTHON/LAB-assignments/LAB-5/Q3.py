def next_lexicographical_permutation(s):
    s = list(s)
    n = len(s)

    i = n - 2
    while i >= 0 and s[i] >= s[i + 1]:
        i -= 1
    if i == -1:
        return "no answer"

    j = n - 1
    while s[j] <= s[i]:
        j -= 1
    s[i], s[j] = s[j], s[i] #swapping

    s = s[:i + 1] + s[i + 1:][::-1] #reverse 
    return ''.join(s)

w = input("Enter the word: ")
print(next_lexicographical_permutation(w))
