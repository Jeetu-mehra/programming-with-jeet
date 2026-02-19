import heapq

# Value	Meaning
# 0	Empty tile (you can move here)
# 1	Wall/obstruction (you cannot enter)
# 2	Start position (agent starts here)
# 3	Reward/Goal position (target points to collect)

maze = [
    [2, 0, 0, 0, 1],
    [0, 1, 0, 0, 3],
    [0, 3, 0, 1, 1],
    [0, 1, 0, 0, 1],
    [3, 0, 0, 0, 3]
]

ROWS, COLS = 5, 5

# Directions: L, R, U, D
moves = {
    "L": (0, -1),
    "R": (0, 1),
    "U": (-1, 0),
    "D": (1, 0)
}

def manhattan(a, b):
    return abs(a[0] - b[0]) + abs(a[1] - b[1])

def find_start_and_rewards(maze):
    start = None
    rewards = []
    for r in range(ROWS):
        for c in range(COLS):
            if maze[r][c] == 2:
                start = (r, c)
            elif maze[r][c] == 3:
                rewards.append((r, c))
    return start, rewards

def a_star(start, goal):
    pq = []
    heapq.heappush(pq, (0 + manhattan(start, goal), 0, start))

    parent = {}
    g_cost = {start: 0}
    visited_order = []

    while pq:
        f, g, current = heapq.heappop(pq)

        if current in visited_order:
            continue

        visited_order.append(current)

        if current == goal:
            # reconstruct path
            path = []
            cur = goal
            while cur != start:
                path.append(cur)
                cur = parent[cur]
            path.append(start)
            path.reverse()
            return path, visited_order

        for action, (dr, dc) in moves.items():
            nr, nc = current[0] + dr, current[1] + dc

            if 0 <= nr < ROWS and 0 <= nc < COLS and maze[nr][nc] != 1:
                neighbor = (nr, nc)
                new_g = g + 1

                if neighbor not in g_cost or new_g < g_cost[neighbor]:
                    g_cost[neighbor] = new_g
                    parent[neighbor] = current
                    new_f = new_g + manhattan(neighbor, goal)
                    heapq.heappush(pq, (new_f, new_g, neighbor))

    return None, visited_order

def collect_all_rewards():
    start, rewards = find_start_and_rewards(maze)
    current = start
    collected = []
    full_path = []
    total_visited = []

    while rewards:
        # choose nearest reward (greedy selection of next goal)
        rewards.sort(key=lambda x: manhattan(current, x))
        goal = rewards[0]

        path, visited = a_star(current, goal)

        if path is None:
            print("No path exists to reward:", goal)
            return

        # store results
        full_path.extend(path[1:])  # avoid repeating same node
        total_visited.extend(visited)

        collected.append(goal)
        rewards.remove(goal)
        current = goal

    print("Start:", start)
    print("Rewards Collected in Order:", collected)
    print("\nFinal Path Taken:")
    print([start] + full_path)

    print("\nTotal Tiles Visited During Searches:")
    print(total_visited)

    print("\nTotal Path Length:", len(full_path))

collect_all_rewards()
