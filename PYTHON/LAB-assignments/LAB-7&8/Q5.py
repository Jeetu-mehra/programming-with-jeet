class Rectangle:
    def RectangleArea(self):
        l=float(input("length:"))
        b=float(input("breadth:"))
        R_area=l*b 
        print("area of rectangle :", R_area)
        perimeter=2*(l+b)
        print("perimeter of rectangle :", perimeter)

      
class Circle:
    def circleArea(self):
        r=float(input("Radius:"))
        C_area=3.14*r*r
        print("area of circle :", C_area)
        circumferrence=2*3.14*r
        print("circumferrence of circle :", circumferrence)
        
       
class Shape(Rectangle, Circle):
    
    def _init_(self):
        pass

    def calculateArea(self):
        choice = input("Choose the shape (Rectangle/Circle): ").lower()
        if choice == 'rectangle':
            self.RectangleArea()  
        elif choice == 'circle':
            self.circleArea()  
        else:
            print("Invalid shape. Please choose 'Rectangle' or 'Circle'.")
s=Shape()
s.calculateArea()