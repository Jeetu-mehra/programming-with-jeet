n=int(input("Enter the no of students: "))
student=[]
for i in range(n):
    name=input("Enter the name: ")
    name=name[:15]
    student.append(name)

for name in student:
    print(name[::-1])


