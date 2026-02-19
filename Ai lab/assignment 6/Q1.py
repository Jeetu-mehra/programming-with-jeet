import heapq

# Heuristic values h(n) to Boston
heuristic = {
    "Boston": 0,
    "Providence": 50,
    "Portland": 107,
    "New York": 215,
    "Philadelphia": 270,
    "Baltimore": 360,
    "Syracuse": 260,
    "Buffalo": 400,
    "Pittsburgh": 470,
    "Cleveland": 550,
    "Columbus": 640,
    "Detroit": 610,
    "Indianapolis": 780,
    "Chicago": 860
}

# City List (order matters for adjacency matrix)
cities = [
    "Chicago", "Indianapolis", "Columbus", "Detroit", "Cleveland",
    "Pittsburgh", "Buffalo", "Syracuse", "Philadelphia",
    "Baltimore", "New York", "Providence", "Boston", "Portland"
]

n = len(cities)

# Mapping city -> index
index = {city: i for i, city in enumerate(cities)}

# Initialize adjacency matrix with infinity
INF = float('inf')
adj_matrix = [[INF] * n for _ in range(n)]

# Distance from node to itself = 0
for i in range(n):
    adj_matrix[i][i] = 0

# Function to add undirected edges in matrix
def add_edge(u, v, cost):
    i, j = index[u], index[v]
    adj_matrix[i][j] = cost
    adj_matrix[j][i] = cost


# -----------------------------
# Add edges based on given map
# -----------------------------
add_edge("Chicago", "Detroit", 283)
add_edge("Chicago", "Cleveland", 345)
add_edge("Chicago", "Indianapolis", 182)

add_edge("Indianapolis", "Columbus", 176)

add_edge("Columbus", "Cleveland", 144)
add_edge("Columbus", "Pittsburgh", 185)

add_edge("Detroit", "Cleveland", 169)
add_edge("Detroit", "Buffalo", 256)

add_edge("Cleveland", "Buffalo", 189)
add_edge("Cleveland", "Pittsburgh", 134)

add_edge("Buffalo", "Syracuse", 150)
add_edge("Buffalo", "Pittsburgh", 215)

add_edge("Pittsburgh", "Philadelphia", 305)
add_edge("Pittsburgh", "Baltimore", 247)

add_edge("Baltimore", "Philadelphia", 101)

add_edge("Philadelphia", "New York", 97)
add_edge("Philadelphia", "Syracuse", 253)

add_edge("Syracuse", "Boston", 312)
add_edge("Syracuse", "New York", 254)

add_edge("New York", "Boston", 215)
add_edge("New York", "Providence", 181)

add_edge("Providence", "Boston", 50)

add_edge("Boston", "Portland", 107)


# -------------------------------
# Get neighbors from adjacency matrix
# -------------------------------
def get_neighbors(city):
    neighbors = []
    i = index[city]
    for j in range(n):
        if adj_matrix[i][j] != INF and i != j:
            neighbors.append((cities[j], adj_matrix[i][j]))
    return neighbors


# -------------------------------
# Greedy Best First Search
# -------------------------------
def greedy_best_first(start, goal):
    pq = []
    heapq.heappush(pq, (heuristic[start], start))

    visited = set()
    parent = {}
    explored_order = []

    while pq:
        h, node = heapq.heappop(pq)

        if node in visited:
            continue

        visited.add(node)
        explored_order.append(node)

        if node == goal:
            break

        for neighbor, cost in get_neighbors(node):
            if neighbor not in visited:
                if neighbor not in parent:
                    parent[neighbor] = node
                heapq.heappush(pq, (heuristic[neighbor], neighbor))

    # Reconstruct path
    path = []
    cur = goal
    while cur != start:
        path.append(cur)
        cur = parent.get(cur)
        if cur is None:
            return None, explored_order
    path.append(start)
    path.reverse()

    return path, explored_order


# -------------------------------
# A* Search Algorithm
# -------------------------------
def a_star(start, goal):
    pq = []
    heapq.heappush(pq, (heuristic[start], 0, start))  # (f, g, node)

    visited = set()
    parent = {}
    g_cost = {start: 0}
    explored_order = []

    while pq:
        f, g, node = heapq.heappop(pq)

        if node in visited:
            continue

        visited.add(node)
        explored_order.append(node)

        if node == goal:
            break

        for neighbor, cost in get_neighbors(node):
            new_g = g + cost

            if neighbor not in g_cost or new_g < g_cost[neighbor]:
                g_cost[neighbor] = new_g
                parent[neighbor] = node
                new_f = new_g + heuristic[neighbor]
                heapq.heappush(pq, (new_f, new_g, neighbor))

    # Reconstruct path
    path = []
    cur = goal
    while cur != start:
        path.append(cur)
        cur = parent.get(cur)
        if cur is None:
            return None, explored_order, None
    path.append(start)
    path.reverse()

    return path, explored_order, g_cost[goal]


# -------------------------------
# MAIN EXECUTION
# -------------------------------
start_city = "Chicago"
goal_city = "Boston"

greedy_path, greedy_explored = greedy_best_first(start_city, goal_city)
astar_path, astar_explored, astar_cost = a_star(start_city, goal_city)

print("========== ADJACENCY MATRIX ==========")
print("Cities order:", cities)
print("\nMatrix:")
for row in adj_matrix:
    print(row)

print("\n========== GREEDY BEST FIRST SEARCH ==========")
print("Path:", greedy_path)
print("Cities explored order:", greedy_explored)
print("Total cities explored:", len(greedy_explored))

print("\n========== A* SEARCH ==========")
print("Path:", astar_path)
print("Cities explored order:", astar_explored)
print("Total cities explored:", len(astar_explored))
print("Total path cost:", astar_cost)

print("\n========== COMPARISON ==========")
print("Greedy explored:", len(greedy_explored))
print("A* explored:", len(astar_explored))
