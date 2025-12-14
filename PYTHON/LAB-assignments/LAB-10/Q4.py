import numpy as np

# Set N (N >= 10)
N = 10

# Generate N random 2D Cartesian coordinates (x, y)
cartesian_coords = np.random.rand(N, 2) * 10  # scale up to [0, 10) for visibility

# Convert to polar coordinates
# r = sqrt(x^2 + y^2), theta = arctan(y / x)
x = cartesian_coords[:, 0]
y = cartesian_coords[:, 1]
r = np.sqrt(x**2 + y**2)
theta = np.arctan2(y, x)  # arctan2 gives correct quadrant

polar_coords = np.column_stack((r, theta))

# Print results
print("Cartesian Coordinates:\n", cartesian_coords)
print("\nPolar Coordinates (r, theta in radians):\n", polar_coords)
