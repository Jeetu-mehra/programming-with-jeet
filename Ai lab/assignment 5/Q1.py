from collections import deque

# State Representation:
# (GL, BL, boat)
# boat = 0 means Left
# boat = 1 means Right

TOTAL_G = 3
TOTAL_B = 3

MOVES = [(1,0), (2,0), (0,1), (0,2), (1,1)]  # possible boat moves


def is_valid_state(state):
    GL, BL, boat = state
    GR = TOTAL_G - GL
    BR = TOTAL_B - BL

    # Left side safe condition
    if GL > 0 and BL > GL:
        return False

    # Right side safe condition
    if GR > 0 and BR > GR:
        return False

    # bounds check
    if GL < 0 or BL < 0 or GL > TOTAL_G or BL > TOTAL_B:
        return False

    return True


def get_successors(state):
    GL, BL, boat = state
    successors = []

    for g, b in MOVES:
        if boat == 0:  # boat on Left -> move to Right
            new_state = (GL - g, BL - b, 1)
        else:          # boat on Right -> move to Left
            new_state = (GL + g, BL + b, 0)

        if is_valid_state(new_state):
            successors.append(new_state)

    return successors


# -----------------------------
# Depth Limited Search (DLS)
# -----------------------------
def DLS(start, goal, limit):
    explored = 0

    def recursive_dls(state, path, depth):
        nonlocal explored
        explored += 1

        if state == goal:
            return path

        if depth == limit:
            return None

        for child in get_successors(state):
            if child not in path:   # avoid cycle
                result = recursive_dls(child, path + [child], depth + 1)
                if result is not None:
                    return result

        return None

    solution = recursive_dls(start, [start], 0)
    return solution, explored


# -----------------------------
# Iterative Deepening Search (IDS)
# -----------------------------
def IDS(start, goal, max_depth=50):
    total_explored = 0

    for depth in range(max_depth + 1):
        solution, explored = DLS(start, goal, depth)
        total_explored += explored

        if solution is not None:
            return solution, total_explored, depth

    return None, total_explored, max_depth


# -----------------------------
# Print solution nicely
# -----------------------------
def print_solution(path):
    if not path:
        print("No solution found.")
        return

    print("\nSolution Path:\n")
    for i, state in enumerate(path):
        GL, BL, boat = state
        GR = TOTAL_G - GL
        BR = TOTAL_B - BL
        boat_side = "Left" if boat == 0 else "Right"

        print(f"Step {i}: Left({GL}G,{BL}B) | Right({GR}G,{BR}B) | Boat: {boat_side}")

    print("\nTotal Moves =", len(path) - 1)


# -----------------------------
# Main Program
# -----------------------------
if __name__ == "__main__":
    start_state = (3, 3, 0)
    goal_state = (0, 0, 1)

    print("===== Depth Limited Search (limit=3) =====")
    dls_solution, dls_explored = DLS(start_state, goal_state, limit=3)

    if dls_solution is None:
        print("DLS Result: No solution found within depth limit 3")
    else:
        print_solution(dls_solution)

    print("Explored States in DLS =", dls_explored)

    print("\n===== Iterative Deepening Search (IDS) =====")
    ids_solution, ids_explored, depth_found = IDS(start_state, goal_state, max_depth=50)

    if ids_solution is None:
        print("IDS Result: No solution found.")
    else:
        print(f"Solution found at depth = {depth_found}")
        print_solution(ids_solution)

    print("Explored States in IDS =", ids_explored)

    # -----------------------------
    # Comparison Output
    # -----------------------------
    print("\n===== Comparison =====")
    print(f"DLS (limit=3): Explored States = {dls_explored}, Solution = {'Found' if dls_solution else 'Not Found'}")
    print(f"IDS: Explored States = {ids_explored}, Solution Depth = {depth_found}")

    print("\nApproximate Time Complexity:")
    print("DLS: O(b^l)  where l = depth limit")
    print("IDS: O(b^d)  where d = solution depth")
