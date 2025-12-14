# # Q1
# a=int(input("Enter first number"))
# b=int(input("Enter second number"))
# print(a+b)


# #Q2
# import math
# b=int(input("Enter a no: "))
# print("factorial of b is")
# print(math.factorial(b))



# # Q4
# a=int(input("Enter first number"))
# b=int(input("Enter second number"))
# a=a+b
# b=a-b
# a=a-b
# print("a = ")
# print (a)
# print("b = ")
# print (b)



# #5
# count=1
# n=int(input("Enter a number"))
# print("Table of n is:")
# while count<=10:
#     c=count*n
#     count=count+1
#     print(c)

# #6
# num=0
# n=int(input("Enter a number"))
# while n!=0:
#     l=n%10
#     n=n//10
#     num=num*10+l
# print(num)



# chai="Masala chai"
# print(chai[0])
# print(chai[-1])
# print(chai[:])
# print(chai[3:])
# print(chai[:8])
# print(chai[0:10:2])
# print(chai[::-2])


# print(0.1+0.1+0.4)


# print("hel,eloe,wor,eld".split(","))


# print("hello sir\"how are you\"ser")


# dict={"name":"jeet","cgpa":9.6,"marks":[98,97,95]}
# print(dict.keys())
# print(dict.values())
# print(dict.items())
# dict["name"]="mehra"
# print(dict)


# dict={"name":"jeet","cgpa":9.6,"marks":[98,97,95]}
# dict["address"]="mathura"
# print(dict)


# age=int(input("Enter the Age: "))
# day=input("Enter the Day: ")
# if(age<17): 
#     price=8
# else: 
#     price=12
# if(day=='wed') :
#     print(price-2)
# else: 
#     print(price)



# numbers=[1,-2,3,-4,5,6,-7,1,-8,9,10]
# count=0
# for num in numbers:
#     if (num>0):
#         count=count+1
# print(count)



# def show(n):
#     if(n==0):
#         return
#     print(n)
#     show(n-1)

# show(5)




# def func():
#     x=5

#     return x
# result=func()
# print(x)



# const a=10
# name="ravi"
# print(a)
# # a="taj"
# print(a)


# a=10
# b=1
# if(a>b):print("a is large")
#     print("1")
# elif b>a:
#     print("B is large")
# else: 
#     print("A is equal to b")


# count=5
# while(count>0):
#     print(count)
#     count=count-1
# # elif(count==3):
# #     print("rav")
# else:
#     print("hello")

# l=[1,"george",67.0]
# for qwer in l:
#     print(qwer)
# # print(l)



# l=[1,"george",67.0]
# print(type(range(1,10)))
# # print(l)


# # Floating Point
# print(3.31e5) # Scientific Notation
# print(3.7) # Decimal Notation
# #float funciton
# print(float('14.55'))
# print(type(float('14.55')))

# b=True
# print(type(b))


# #Formatting Number and String
# #format(item,format-specifier)
# radius= int(input("Enter the radius of Circle"))
# print("Radius ",radius)
# PI =3.1428
# area = PI * radius * radius
# print("Area of Circle",format(area,'0.1f')) # 1.2f ==> 3 =>Field Widht 2=>Precision 
# print("Area of Circle",format(area,'1.1f')) # 1.2f ==> 3 =>Field Widht 2=>Precision 
# print("Area of Circle",format(area,'3.1f')) # 1.2f ==> 3 =>Field Widht 2=>Precision 
# print("Area of Circle",format(area,'1.3f')) # 1.2f ==> 3 =>Field Widht 2=>Precision 

# # print("Area of Circle: {:<6.2f}".format(area))







# import re
# txt = "The rain in Spain"
# x = re.search("^The.*Spain$", txt)

# print(x)



# import re
# txt = "The rain in Spain"
# x = re.search("^The.*Spai$", txt)

# # print(x)

# import re

# #Check if the string starts with "The" and ends with "Spain":

# txt = "The rain in Spain"
# x = re.search("^The.*Spain$", txt)

# if x:
#   print("YES! We have a match!")
# else:
#   print("No match")



# ______________________________________________________________________________________________________________________________________________________________________________



# class student:
#     def __init__(self,name):
#         self.name=name
#         self.marks=[]
      
#     def entermarks(self):
#         for i in range(3):
#             mar=int(input("Enter marks"))
#             self.marks.append(mar)
#     def display(self):
#         print(self.name,"have got",self.marks)

# s1=student("ravi")
# s1.entermarks()
# s2=student("sahil")
# s2.entermarks()
# s1.display()
# s2.display()



# class circle:
#     def __init__(self,radius):
#         self.radius=radius
#     def circum(self):
#         return 2*3.14*self.radius
#     def area(self):
#         return 3.14*self.radius*self.radius
    
# r=circle(5)
# print("circum: ",r.circum())
# print("area: ",r.area())


# import numpy as np
# t=np.array([1,2,3])
# d=np.array([0.5,1,1.5])
# s=d/t
# print(s)

# d=t*s
# print(d)
# d.dot(t)



# import numpy as np
# distance=np.array([1,2.0,3])
# time=np.array([2,4,8])
# speed=distance*time
# print(speed)
# print(speed/distance)
# x=distance.dot(time)
# print(x)
# y=np.sum(time)
# print(y)
# z=np.eye(3)
# print(z)
# print(np.random.randint(1,100,5))
# print(np.random.randn(5))


# import pandas as pd
# d={'a':1,'b':2,'c':3}
# c=[1,2,3]
# ser=pd.Series(d,index=['a','b','c'])
# ser2=pd.Series(c,index=['a','b','c'])
# print(ser)
# print(ser2)


# import pandas as pd
# d = {
#    "one": pd.Series([1.0, 2.0, 3.0], index=["q", "b", "c"]),
#    "two": pd.Series([1.0, 2.0, 3.0, 4.0], index=["p", "b", "c", "d"]),
#     }
# print(d)

# df=pd.DataFrame(d)
# print(df)


# import numpy as np
# data = np.zeros((2,), dtype=[("A", "i4"), ("B", "f4"), ("C", "S10")])
# print(data)




# importing mplot3d toolkits, numpy and matplotlib
# from mpl_toolkits import mplot3d
# import numpy as np
# import matplotlib.pyplot as plt

# fig = plt.figure()

# # syntax for 3-D projection
# ax = plt.axes(projection ='3d')

# # defining all 3 axes
# z = np.linspace(0, 1, 1000)
# x = z * np.sin(25 * z)
# y = z * np.cos(25 * z)

# # plotting
# ax.plot3D(x, y, z, 'red')
# ax.set_title('3D line plot')
# plt.show()



num1=int(input("n1: "))
num2=input("n2: ")