import numpy as np
import matplotlib.pyplot as plt

# Define the function (example: a cubic polynomial)
def f(x):
    return x**3 - 6*x**2 + 11*x - 6  # Roots at x=1,2,3

# Find an initial interval [a, b] where f(a) * f(b) < 0 using random probing
np.random.seed(0)
while True:
    a = np.random.uniform(0, 5)
    b = np.random.uniform(0, 5)
    if f(a) * f(b) < 0:
        break

# Bisection method
tolerance = 1e-5
max_iterations = 100
history = []

for _ in range(max_iterations):
    c = (a + b) / 2
    fc = f(c)
    history.append((a, b, c, fc))
    
    if abs(fc) < tolerance or (b - a) / 2 < tolerance:
        break
    
    if f(a) * fc < 0:
        b = c
    else:
        a = c

# Convert history to NumPy array
history = np.array(history)

# Plotting the root finding process
plt.figure(figsize=(10, 6))
x_vals = np.linspace(0, 5, 400)
y_vals = f(x_vals)

plt.plot(x_vals, y_vals, label='f(x)')
plt.axhline(0, color='gray', linestyle='--')

# Marking midpoints
plt.scatter(history[:, 2], history[:, 3], color='red', label='Midpoints', zorder=5)
plt.plot(history[:, 2], history[:, 3], color='red', linestyle='--', alpha=0.5)

plt.title("Bisection Method Root Finding")
plt.xlabel("x")
plt.ylabel("f(x)")
plt.legend()
plt.grid(True)
plt.show()

# Print final root approximation
print(f"Approximate root: {c:.5f}")
