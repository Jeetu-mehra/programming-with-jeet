#4. PYTHON PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE

#taking user's input
n1 = int(input("Enter first number"))
n2 = int(input("Enter second number"))

#using the swap logic without using third variable
n2=n1+n2
n1=n2-n1
n2=n2-n1

print(f"First number:{n1} Second number: {n2}")