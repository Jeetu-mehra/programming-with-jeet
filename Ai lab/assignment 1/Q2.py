from collections import deque

# Graph (Adjacency List)
graph = {
    "Rahul": ["Sneha", "Maya", "Neha1", "Neha2", "Arjun1", "Pooja2"],
    "Sneha": ["Rahul", "Sunil", "Maya"],
    "Maya": ["Sneha", "Rahul", "Arjun2"],
    "Sunil": ["Sneha", "Raj", "Akash"],
    "Raj": ["Sunil", "Priya", "Neha1"],
    "Priya": ["Raj", "Akash", "Aarav"],
    "Akash": ["Sunil", "Priya", "Neha1"],
    "Neha1": ["Rahul", "Raj", "Akash", "Aarav", "Neha2"],
    "Neha2": ["Rahul", "Neha1", "Aarav", "Arjun1"],
    "Aarav": ["Priya", "Neha1", "Neha2"],
    "Arjun1": ["Rahul", "Neha2", "Pooja2"],
    "Pooja2": ["Rahul", "Arjun1", "Pooja1"],
    "Pooja1": ["Pooja2", "Arjun2"],
    "Arjun2": ["Maya", "Pooja1"]
}

def bfs(start):
    