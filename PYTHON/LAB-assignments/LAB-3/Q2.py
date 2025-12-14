num=int(input("Enter a number: "))
List=[1,1]
for i in range(2,num):
    n=List[i-1]+List[i-2]
    List.append(n)

if num in List:
    print("ISFIBO")
else:
    print("ISNOTFIBO")

