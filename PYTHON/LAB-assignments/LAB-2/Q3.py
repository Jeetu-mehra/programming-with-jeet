# Find Digits
# You are given a number N, you need to print the number of positions where digits exactly
# divides N.

number=int(input("Enter Number: "))
count=0
n=number
while(number>0):
    l=number%10
    if(n%l==0): 
        count+=1
    number//=10
print(count)