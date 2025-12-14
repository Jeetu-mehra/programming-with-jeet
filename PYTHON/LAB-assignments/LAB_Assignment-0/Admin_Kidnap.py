N=int(input("Enter number of Boxes : "))
X=int(input("Enter the Xth box number : "))
S=int(input("Enter number of Swaps : "))
T=int(input("Enter total number of test case :"))
i=0
while i<T:
    for i in range(S):2
        A=int(input("Enter A : "))
        B=int(input("Enter B : "))
        if B==X:
            temp=A
            A=X
            X=temp
        elif A==X:
            temp=B
            B=X
            X=temp
i+=1

print(X)