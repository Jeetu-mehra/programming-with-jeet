from collections import deque

# Constraint graph
graph = {
    "P1": ["P2", "P3", "P6"],
    "P2": ["P1", "P3", "P4"],
    "P3": ["P1", "P2", "P5"],
    "P4": ["P2", "P6"],
    "P5": ["P3", "P6"],
    "P6": ["P1", "P4", "P5"]
}

# Initial domains
domains = {
    "P1": {"R1", "R2", "R3"},
    "P2": {"R1", "R2", "R3"},
    "P3": {"R1", "R2", "R3"},
    "P4": {"R1", "R2", "R3"},
    "P5": {"R1", "R2", "R3"},
    "P6": {"R1", "R2", "R3"}
}


# Revise function
def revise(domains, xi, xj):
    revised = False
    to_remove = set()

    for val_i in domains[xi]:
        # Check if there exists val_j such that val_i != val_j
        if not any(val_i != val_j for val_j in domains[xj]):
            to_remove.add(val_i)

    if to_remove:
        domains[xi] -= to_remove
        revised = True

    return revised


# AC-3 Algorithm
def ac3(domains, graph, trace=False):
    queue = deque()

    # Initialize queue with all arcs
    for xi in graph:
        for xj in graph[xi]:
            queue.append((xi, xj))

    step = 0

    while queue:
        xi, xj = queue.popleft()

        if trace and step < 5:
            print(f"Step {step+1}: Checking arc ({xi}, {xj})")

        if revise(domains, xi, xj):
            if trace and step < 5:
                print(f"  Domain revised: {xi} -> {domains[xi]}")

            if not domains[xi]:
                return False

            for neighbor in graph[xi]:
                if neighbor != xj:
                    queue.append((neighbor, xi))
        else:
            if trace and step < 5:
                print("  No change")

        step += 1

    return True


# Helper function to print domains
def print_domains(domains):
    for var in domains:
        print(f"{var}: {domains[var]}")
    print("-" * 30)


# ------------------ MAIN ------------------

print("Initial Domains:")
print_domains(domains)

print("Running AC-3 (Initial)...")
ac3(domains, graph, trace=True)

print("\nAfter AC-3:")
print_domains(domains)

# Assign P1 = R1
print("\nAssign P1 = R1 and re-run AC-3")
domains["P1"] = {"R1"}

result = ac3(domains, graph)

print("\nAfter Assignment:")
print_domains(domains)

if result:
    print("✅ No failure (arc-consistent)")
else:
    print("❌ Failure detected (empty domain)")