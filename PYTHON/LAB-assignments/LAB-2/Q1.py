# Write a program that asks the user to enter a word and then capitalizes every other letter of
# that word. So, if the user enters rhinoceros, the program should print rHiNoCeRoS.
word=input("Enter Word: ")
length=len(word)
new_word=""
for i in range(length):
    if(i%2==0):
        new_word+=word[i].lower()
    else: 
        new_word+=word[i].upper()
print(new_word)