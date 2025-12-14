import math

class Vector2D:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def magnitude(self):
        return math.sqrt(self.x ** 2 + self.y ** 2)

    def angle_with_x_axis(self):
        return math.degrees(math.atan2(self.y, self.x))

    @staticmethod
    def distance(v1, v2):
        return math.sqrt((v2.x - v1.x) ** 2 + (v2.y - v1.y) ** 2)

    @staticmethod
    def dot_product(v1, v2):
        return v1.x * v2.x + v1.y * v2.y

    @staticmethod
    def cross_product(v1, v2):
        return v1.x * v2.y - v1.y * v2.x

class Vector3D(Vector2D):
    def __init__(self, x, y, z):
        super().__init__(x, y)
        self.z = z

    def magnitude(self):
        return math.sqrt(self.x ** 2 + self.y ** 2 + self.z ** 2)

    @staticmethod
    def distance(v1, v2):
        return math.sqrt((v2.x - v1.x) ** 2 + (v2.y - v1.y) ** 2 + (v2.z - v1.z) ** 2)

    @staticmethod
    def dot_product(v1, v2):
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z

    @staticmethod
    def cross_product(v1, v2):
        return Vector3D(
            v1.y * v2.z - v1.z * v2.y,
            v1.z * v2.x - v1.x * v2.z,
            v1.x * v2.y - v1.y * v2.x
        )

# Example Usage
if __name__ == "__main__":
    x1, y1 = map(float, input("Enter x and y for Vector1 (2D): ").split())
    x2, y2 = map(float, input("Enter x and y for Vector2 (2D): ").split())
    
    v1 = Vector2D(x1, y1)
    v2 = Vector2D(x2, y2)
    
    print(f"Magnitude of Vector1: {v1.magnitude()}")
    print(f"Angle with X-axis of Vector1: {v1.angle_with_x_axis()}")
    print(f"Distance between Vectors: {Vector2D.distance(v1, v2)}")
    print(f"Dot Product: {Vector2D.dot_product(v1, v2)}")
    print(f"Cross Product: {Vector2D.cross_product(v1, v2)}")
    
    x3, y3, z3 = map(float, input("Enter x, y, and z for Vector3 (3D): ").split())
    x4, y4, z4 = map(float, input("Enter x, y, and z for Vector4 (3D): ").split())
    
    v3 = Vector3D(x3, y3, z3)
    v4 = Vector3D(x4, y4, z4)
    
    print(f"Magnitude of Vector3: {v3.magnitude()}")
    print(f"Distance between 3D Vectors: {Vector3D.distance(v3, v4)}")
    print(f"Dot Product (3D): {Vector3D.dot_product(v3, v4)}")
    cross_v = Vector3D.cross_product(v3, v4)
    print(f"Cross Product (3D): ({cross_v.x}, {cross_v.y}, {cross_v.z})")
