l=[]
for i in range(1,10001):
    l.append(i)

List_0=[]
List_1=[]
List_2=[]
List_3=[]
List_4=[]

for i in range(1,10001):
    if(i%5==0): List_0.append(i)
    elif(i%5==1): List_1.append(i)
    elif(i%5==2): List_2.append(i)
    elif(i%5==3): List_3.append(i)
    else: List_4.append(i)
List = List_0 + List_1 + List_2 + List_3 + List_4
List.sort()
# print(l)
# print("\n\n")
# print(List)
if(List == l ):
    print("true")
else:
    print("false")