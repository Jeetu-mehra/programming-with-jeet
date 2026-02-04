from collections import deque

cities = ["Chicago","Detroit","Cleveland","Buffalo","Syracuse",
    "Pittsburgh","Columbus","Indianapolis","New York",
    "Philadelphia","Baltimore","Boston","Providence","Portland"
]

n = len(cities)

graph = [[0 for _ in range(n)] for _ in range(n)]

edges = [
    (0,1,283),(0,2,345),(0,7,182),
    (1,2,169),(1,3,256),
    (2,3,189),(2,5,134),(2,6,144),
    (3,4,150),(3,8,312),
    (4,8,254),(4,11,312),(4,9,253),
    (5,6,185),(5,9,305),
    (6,7,176),(6,9,247),
    (8,9,97),(8,11,215),(8,12,181),
    (9,10,101),
    (10,11,161),
    (11,12,50),
    (12,13,107)
]

for u,v,w in edges:
    graph[u][v] = w
    graph[v][u] = w

def bfs(start, goal):
    queue = deque()
    queue.append((start, [start], 0));

    while queue:
        current, path, dist = queue.popleft()

        if current == goal:
            for c in path:
                print(cities[c], end=" -> ")
            print("END | Distance:", dist)
            continue

        for neighbor in range(n):
            if graph[current][neighbor] != 0 and neighbor not in path:
                queue.append((neighbor, path + [neighbor], dist + graph[current][neighbor]))

def dfs(current, goal, reached, path, dist):
    reached[current] = True
    path.append(current)

    if current == goal:
        for c in path:
            print(cities[c], end=" -> ")
        print("END | Distance:", dist)
    else :
        for neighbor in range(n):
            if graph[current][neighbor] != 0 and not reached[neighbor]:
                dfs(neighbor, goal, reached, path, dist + graph[current][neighbor])
    path.pop()
    reached[current] = False

if __name__ == "__main__":
    start_city = 0   # Chicago
    end_city = 4     # Syracuse

    print("DFS Paths:\n")
    reached = [False] * n
    dfs(start_city, end_city, reached, [], 0)

    bfs(start_city, end_city)
