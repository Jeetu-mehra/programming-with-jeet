from collections import deque

# ---------------- INPUT GRID ----------------
grid = [
    [0,0,0,0,0,6,0,0,0],
    [0,5,9,0,0,0,0,0,8],
    [2,0,0,0,0,8,0,0,0],
    [0,4,5,0,0,0,0,0,0],
    [0,0,3,0,0,0,0,0,0],
    [0,0,6,0,0,3,0,5,0],
    [0,0,0,0,0,7,0,0,0],
    [0,0,0,0,0,0,0,0,0],
    [0,0,0,0,5,0,0,0,2]
]

# ---------------- SETUP ----------------

# Variables = (row, col)
variables = [(r, c) for r in range(9) for c in range(9)]

# Domains
domains = {}

for r in range(9):
    for c in range(9):
        if grid[r][c] == 0:
            domains[(r,c)] = set(range(1,10))
        else:
            domains[(r,c)] = {grid[r][c]}

# ---------------- NEIGHBORS ----------------

def get_neighbors(r, c):
    neighbors = set()

    # Row + Column
    for i in range(9):
        if i != c:
            neighbors.add((r, i))
        if i != r:
            neighbors.add((i, c))

    # 3x3 box
    box_r, box_c = 3*(r//3), 3*(c//3)
    for i in range(box_r, box_r+3):
        for j in range(box_c, box_c+3):
            if (i, j) != (r, c):
                neighbors.add((i, j))

    return neighbors

# Build graph
neighbors = {var: get_neighbors(*var) for var in variables}

# ---------------- AC-3 ----------------

def revise(domains, xi, xj):
    revised = False
    removed_count = 0

    to_remove = set()

    for val_i in domains[xi]:
        if not any(val_i != val_j for val_j in domains[xj]):
            to_remove.add(val_i)

    if to_remove:
        domains[xi] -= to_remove
        revised = True
        removed_count = len(to_remove)

    return revised, removed_count


def ac3(domains, neighbors):
    queue = deque()

    # Generate all arcs automatically
    for xi in neighbors:
        for xj in neighbors[xi]:
            queue.append((xi, xj))

    total_removed = 0

    while queue:
        xi, xj = queue.popleft()

        revised, removed = revise(domains, xi, xj)

        if revised:
            total_removed += removed

            # If domain empty → failure
            if len(domains[xi]) == 0:
                return False, total_removed

            for xk in neighbors[xi]:
                if xk != xj:
                    queue.append((xk, xi))

    return True, total_removed

# ---------------- RUN AC-3 ----------------

result, removed_values = ac3(domains, neighbors)

# ---------------- OUTPUT ----------------

print("Total values removed:", removed_values)

print("\nDomain Size Grid:")
for r in range(9):
    for c in range(9):
        print(len(domains[(r,c)]), end=" ")
    print()

# ---------------- FINAL CHECK ----------------

all_one = all(len(domains[var]) == 1 for var in domains)
any_zero = any(len(domains[var]) == 0 for var in domains)

print("\nFinal Result:")
if any_zero:
    print(" Failure: Some domain became EMPTY → Unsolvable")
elif all_one:
    print(" Fully Solved by AC-3")
else:
    print(" Partially Reduced (Expected for HARD Sudoku)")