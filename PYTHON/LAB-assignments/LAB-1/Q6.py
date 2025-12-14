# Consider a 3-D co-ordinate space. Input 10 3-D points. Find the nearest neighbour for each
# of the points in your 3-D space and store them in a list. The final output is a list with each
# consisting of a point and its nearest neighbour. [Hint: Use distance between two points
# formula]
import math

points = []
print("Enter 10 3D points as x,y,z")
for i in range(10):
    x, y, z = input(f"Enter point {i+1} (x,y,z): ").split(',')
    x, y, z = float(x), float(y), float(z)
    points.append((x, y, z))

nearest_neighbours = []
for i in range(len(points)):
    nearest_point = None
    minDist = 10**6
    for j in range(len(points)):
        if i != j:
            dist = math.sqrt((points[i][0] - points[j][0])**2 + (points[i][1] - points[j][1])**2 + (points[i][2] - points[j][2])**2)
            if dist < minDist:
                minDist = dist
                nearest_point = points[j]
    nearest_neighbours.append((points[i], nearest_point))

print("\nPoint and its nearest neighbour:")
for point, nearest_point in nearest_neighbours:
    print(f"Point: {point}, Nearest Neighbour: {nearest_point}")


