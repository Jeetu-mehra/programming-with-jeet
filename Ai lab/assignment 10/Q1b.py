import numpy as np
import pandas as pd

# Load data
data = pd.read_csv("cities.csv", sep='\t')
points = data.values
# Number of airports
k = 3

# Initialize centers randomly
centers = points[np.random.choice(len(points), k, replace=False)]

iterations = 50

for it in range(iterations):
    clusters = [[] for _ in range(k)]

    # Assign points to nearest center
    for p in points:
        distances = [np.sum((p - c)**2) for c in centers]
        idx = np.argmin(distances)
        clusters[idx].append(p)

    # Update centers using Newton Method (mean of cluster)
    for i in range(k):
        if len(clusters[i]) > 0:
            centers[i] = np.mean(clusters[i], axis=0)

# Compute Sum of Squared Distances (SSD)
ssd = 0
for p in points:
    distances = [np.sum((p - c)**2) for c in centers]
    ssd += min(distances)

print("Newton Method Airport Locations:")
print(centers)
print("Sum of Squared Distances (SSD):", ssd)