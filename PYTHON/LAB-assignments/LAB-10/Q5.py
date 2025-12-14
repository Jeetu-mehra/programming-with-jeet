import numpy as np

# Sample NumPy array of strings
arr = np.array(["apple", "banana", "cherry", "date", "fig"])

# Define desired width and padding character
width = 15
pad_char = "_"

# Vectorized formatting functions
centered = np.vectorize(lambda s: s.center(width, pad_char))(arr)
left_justified = np.vectorize(lambda s: s.ljust(width, pad_char))(arr)
right_justified = np.vectorize(lambda s: s.rjust(width, pad_char))(arr)

# Print results
print("Original Array:")
print(arr)

print("\nCentered:")
print(centered)

print("\nLeft-Justified:")
print(left_justified)

print("\nRight-Justified:")
print(right_justified)
