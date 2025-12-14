# MAXIMIZING XOR
L=int(input("Enter the intial val of range: "))
R=int(input("Enter the final val of range: "))
maxxor=0
for i in range(L,R+1):
    for j in range(i,R+1):
        maxxor=max(maxxor,i^j)

    # choco=choco+i//2

print(maxxor)