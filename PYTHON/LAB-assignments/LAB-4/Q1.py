# 1. The Love-Letter Mystery
# James found a love letter his friend Harry has written for his girlfriend. James is a prankster, so he
# decides to meddle with the letter. He changes all the words in the letter into palindromes.
# To do this, he follow 2 rules:
# (a) He can reduce the value of a letter. E.g. He can change ‘d’ to ‘c’ but he cannot change ‘c’ to
# ‘d’.
# (b) In order to form a palindrome, if he has to repeatedly reduce the value of a letters, he can do it
# until the letters becomes ‘a’. Once a letters has been changed to ‘a’, it can no longer be changed.
# Each reduction in the value of any letter is counted as a single operation. Find the minimum number
# of operations required to convert a given string into a palindrome.

str=input("Enter a string: ")
n=len(str)
count=0
j=0
k=n//2+1
for i in range(0,n//2-1):
    if(n%2==0):
        while(str[j]!=str[k]):
            str[k]=str[k]-1
            count=count+1

    else:
        while(str[j]!=str[k+1]):
            str[k+1]=str[k+1]-1
            count=count+1

    j=j+1
    k=k+1
            
print(count)
