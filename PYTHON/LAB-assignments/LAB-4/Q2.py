# 2. Sherlock and Squares
# Watson gives two integers A & B to Sherlock and asks if he can count the number of square
# integers between A and B (both inclusive).
# A square integer is an integer which is the square of any integer.
# For example: 1,4,9,16 are some of the square integers as they are squares of 1,2,3,4 respectively.

a=int(input("Enter starting range: "))
b=int(input("Enter Ending range: "))
count=0
n=1
while(n*n<a):
    n=n+1
for num in range(a,b+1):
    if(num==n*n):
        count=count+1
        n=n+1

print(count)
    