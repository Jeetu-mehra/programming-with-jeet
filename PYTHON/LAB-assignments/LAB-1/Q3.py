length=int(input("Enter the Length: "))
option=int(input("""Enter the conversion unit: 
1 for inches
2 for yards
3 for miles
4 for millimeters
5 for centimeters
6 for meters
7 for kilometers \n"""))

List=[12,0.33,0.00019,304.8,30.48,0.3048,0.0003048]
print(length*List[option-1])