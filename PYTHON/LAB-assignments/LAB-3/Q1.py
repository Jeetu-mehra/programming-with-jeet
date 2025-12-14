num=int(input("Enter the number: "));
while(num>9):
    sum=0
    while(num!=0):
        l=num%10
        sum+=l
        num//=10
    if(sum>9):num=sum
print(sum)
