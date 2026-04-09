import numpy as np
import pandas as pd

# Load data
data = pd.read_csv("cities.csv", sep='\t')
points = data.values

# Number of airports
k = 3

# Initialize centers randomly
centers = points[np.random.choice(len(points), k, replace=False)]

alpha = 0.01




iterations = 100

for it in range(iterations):
    clusters = [[] for _ in range(k)]

    # Assign points to nearest center
    for p in points:
        distances = [np.sum((p - c)**2) for c in centers]
        idx = np.argmin(distances)
        clusters[idx].append(p)

    # Update centers using Gradient Descent
    for i in range(k):
        if len(clusters[i]) > 0:
            cluster_points = np.array(clusters[i])
            gradient = -2 * (cluster_points - centers[i]).mean(axis=0)
            centers[i] = centers[i] - alpha * gradient

# Compute Sum of Squared Distances (SSD)
ssd = 0
for p in points:
    distances = [np.sum((p - c)**2) for c in centers]
    ssd += min(distances)

print("Gradient Descent Airport Locations:")
print(centers)
print("Sum of Squared Distances (SSD):", ssd)