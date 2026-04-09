
graph = {
    "Kutch": ["Banaskantha", "Surendranagar", "Jamnagar"],
    "Banaskantha": ["Kutch", "Patan", "Sabarkantha"],
    "Patan": ["Banaskantha", "Mehsana", "Surendranagar"],
    "Mehsana": ["Patan", "Gandhinagar", "Sabarkantha"],
    "Sabarkantha": ["Banaskantha", "Mehsana", "Gandhinagar", "Panchmahal"],
    "Gandhinagar": ["Mehsana", "Ahmedabad", "Kheda", "Sabarkantha"],
    "Ahmedabad": ["Gandhinagar", "Kheda", "Anand", "Surendranagar"],
    "Kheda": ["Gandhinagar", "Ahmedabad", "Anand", "Panchmahal"],
    "Anand": ["Ahmedabad", "Kheda", "Vadodara"],
    "Vadodara": ["Anand", "Panchmahal", "Bharuch", "Narmada"],
    "Panchmahal": ["Sabarkantha", "Kheda", "Vadodara", "Dahod"],
    "Dahod": ["Panchmahal"],
    "Surendranagar": ["Kutch", "Patan", "Ahmedabad", "Rajkot", "Bhavnagar"],
    "Rajkot": ["Surendranagar", "Jamnagar", "Junagadh", "Amreli"],
    "Jamnagar": ["Kutch", "Rajkot"],
    "Junagadh": ["Rajkot", "Amreli"],
    "Amreli": ["Rajkot", "Junagadh", "Bhavnagar"],
    "Bhavnagar": ["Surendranagar", "Amreli"],
    "Bharuch": ["Vadodara", "Surat", "Narmada"],
    "Surat": ["Bharuch", "Navsari"],
    "Navsari": ["Surat", "Valsad", "Dangs"],
    "Valsad": ["Navsari"],
    "Narmada": ["Vadodara", "Bharuch", "Dangs"],
    "Dangs": ["Navsari", "Narmada"]
}

# Check if assignment is valid
def is_valid(node, color, assignment):
    for neighbor in graph[node]:
        if neighbor in assignment and assignment[neighbor] == color:
            return False
    return True


# Backtracking function
def backtrack(assignment, colors):
    if len(assignment) == len(graph):
        return assignment

    # Select unassigned node
    for node in graph:
        if node not in assignment:
            break

    for color in colors:
        if is_valid(node, color, assignment):
            assignment[node] = color
            result = backtrack(assignment, colors)
            if result:
                return result
            del assignment[node]

    return None


# Try with increasing number of colors
def solve_min_colors():
    color_list = ["Red", "Green", "Blue", "Yellow"]

    for k in range(1, 5):  # Try 1 to 4 colors
        colors = color_list[:k]
        solution = backtrack({}, colors)

        if solution:
            print(f"\n✅ Minimum colors required: {k}\n")
            for district in solution:
                print(district, "->", solution[district])
            return

    print("No solution found!")


# Run
solve_min_colors()