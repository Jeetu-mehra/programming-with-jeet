import heapq

# -------------------------------
# Floor Plan Grid
# 0 = Walkable Path
# 1 = Wall / Blocked
# -------------------------------
grid = [
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1],
    [1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1],
    [1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1],
    [1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1],
    [1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
]

rows = len(grid)
cols = len(grid[0])

# Entry and Exit Points
START = (8, 4)
GOAL  = (4, 18)


# -------------------------------
# Heuristic Function (Manhattan Distance)
# h(n) = |x1-x2| + |y1-y2|
# -------------------------------
def heuristic(current, goal):
    return abs(current[0] - goal[0]) + abs(current[1] - goal[1])


# -------------------------------
# Best First Search Algorithm
# f(n) = h(n)
# -------------------------------
def best_first_search(grid, start, goal):
    pq = []
    heapq.heappush(pq, (heuristic(start, goal), start))

    visited = set()
    visited.add(start)

    parent = {}
    parent[start] = None

    explored = 0

    while pq:
        h, current = heapq.heappop(pq)
        explored += 1

        # Goal check
        if current == goal:
            return parent, explored

        r, c = current

        # Possible Moves: Up, Down, Left, Right
        moves = [(-1,0), (1,0), (0,-1), (0,1)]

        for dr, dc in moves:
            nr, nc = r + dr, c + dc
            new_state = (nr, nc)

            # Check boundaries and wall
            if 0 <= nr < rows and 0 <= nc < cols and grid[nr][nc] == 0:
                if new_state not in visited:
                    visited.add(new_state)
                    parent[new_state] = current
                    heapq.heappush(pq, (heuristic(new_state, goal), new_state))

    return None, explored


# -------------------------------
# Path Reconstruction
# -------------------------------
def get_path(parent, start, goal):
    path = []
    curr = goal

    while curr is not None:
        path.append(curr)
        curr = parent[curr]

    path.reverse()
    return path


# -------------------------------
# Print Grid with Path
# -------------------------------
def print_grid(grid, path):
    path_set = set(path)

    print("\nGrid Path Output:\n")
    for r in range(rows):
        for c in range(cols):
            if (r, c) == START:
                print("S", end=" ")
            elif (r, c) == GOAL:
                print("E", end=" ")
            elif (r, c) in path_set:
                print(".", end=" ")
            elif grid[r][c] == 1:
                print("#", end=" ")
            else:
                print(" ", end=" ")
        print()


# -------------------------------
# MAIN
# -------------------------------
print("Starting Robot Evacuation Planning using Best First Search...")
print("Start =", START)
print("Goal  =", GOAL)

parent, explored = best_first_search(grid, START, GOAL)

if parent:
    path = get_path(parent, START, GOAL)

    print("\n✅ Goal Found!")
    print("Path Length =", len(path))
    print("Nodes Explored =", explored)
    print("Path =", path)

    print_grid(grid, path)

    print("\nEvaluation Function:")
    print("f(n) = h(n)")
    print("h(n) = Manhattan Distance = |x1-x2| + |y1-y2|")

else:
    print("\n No path found!")
