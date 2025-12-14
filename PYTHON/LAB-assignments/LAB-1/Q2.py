import random
l=[]
for i in range(1,101):
    r = random.randint(0,1)
    l.append(r)
print("the list of random numbers are: ")
print(l)
count=0
max=0
for i in range(0,100):
    if(l[i]==0):
        count+=1
    else:
        count=0
    if(count>max):
        max=count
print(max)