n=int(input("Enter the no. of cycles: "))
if(n==0): print(1)
elif(n%2!=0):
    num=n*2
    print(num)
else: 
    num=(2*(n-1))+1
    print(num)


