import heapq

# City map (Graph)
graph = {
    "Syracuse": [("Buffalo",150), ("New York",254), ("Boston",312)],
    "Buffalo": [("Syracuse",150), ("Detroit",256), ("Cleveland",189)],
    "Detroit": [("Buffalo",256), ("Chicago",283)],
    "Chicago": [("Detroit",283), ("Cleveland",345), ("Indianapolis",182)],
    "Cleveland": [("Chicago",345), ("Buffalo",189), ("Columbus",144), ("Pittsburgh",134)],
    "Indianapolis": [("Chicago",182), ("Columbus",176)],
    "Columbus": [("Indianapolis",176), ("Cleveland",144), ("Pittsburgh",185)],
    "Pittsburgh": [("Cleveland",134), ("Columbus",185), ("Baltimore",247), ("New York",305)],
    "Baltimore": [("Pittsburgh",247), ("Philadelphia",101)],
    "Philadelphia": [("Baltimore",101), ("New York",97)],
    "New York": [("Philadelphia",97), ("Pittsburgh",305), ("Boston",215)],
    "Boston": [("New York",215), ("Providence",50), ("Portland",107)],
    "Providence": [("Boston",50)],
    "Portland": [("Boston",107)]
}

# Heuristic values (estimated closeness to Chicago)
heuristic = {
    "Chicago": 0,
    "Detroit": 1,
    "Cleveland": 2,
    "Buffalo": 3,
    "Indianapolis": 3,
    "Columbus": 4,
    "Pittsburgh": 5,
    "Syracuse": 6,
    "Baltimore": 7,
    "Philadelphia": 8,
    "New York": 9,
    "Boston": 10,
    "Providence": 11,
    "Portland": 12
}

# Best-First Search Algorithm
def best_first_search(start, goal):
    priority_queue = []
    heapq.heappush(priority_queue, (heuristic[start], start, [start]))
    visited = set()
    paths_explored = 0

    while priority_queue:
        h, current, path = heapq.heappop(priority_queue)
        paths_explored += 1

        print(f"Expanding: {current} | Heuristic: {h}")

        if current == goal:
            print("\nGoal Reached!")
            return path, paths_explored

        visited.add(current)

        for neighbor, cost in graph[current]:
            if neighbor not in visited:
                heapq.heappush(
                    priority_queue,
                    (heuristic[neighbor], neighbor, path + [neighbor])
                )

    return None, paths_explored


# -------- MAIN --------
start_city = "Syracuse"
goal_city = "Chicago"

path, explored = best_first_search(start_city, goal_city)

print("\nFinal Path:", " → ".join(path))
print("Total Paths Explored:", explored)
