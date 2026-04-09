# Erratic Vacuum Cleaner AND-OR Graph Search

# State representation: (Location, A_state, B_state)
# Location = 'A' or 'B'
# State = 'Dirty' or 'Clean'

goal_state = ('*', 'Clean', 'Clean')

def is_goal(state):
    return state[1] == 'Clean' and state[2] == 'Clean'


def results(state, action):
    location, A, B = state
    outcomes = []

    if action == "Suck":
        if location == 'A':
            if A == 'Dirty':
                # Clean A, maybe clean B too
                outcomes.append(('A', 'Clean', B))
                outcomes.append(('A', 'Clean', 'Clean'))
            else:
                # Dirt may be deposited
                outcomes.append(('A', 'Dirty', B))
        elif location == 'B':
            if B == 'Dirty':
                outcomes.append(('B', A, 'Clean'))
                outcomes.append(('B', 'Clean', 'Clean'))
            else:
                outcomes.append(('B', A, 'Dirty'))

    elif action == "Left":
        outcomes.append(('A', A, B))

    elif action == "Right":
        outcomes.append(('B', A, B))

    return outcomes


def actions(state):
    return ["Suck", "Left", "Right"]


def and_or_search(state, path):
    if is_goal(state):
        return []

    if state in path:
        return None

    for action in actions(state):
        result_states = results(state, action)

        plans = []
        for s in result_states:
            plan = and_or_search(s, path + [state])
            if plan is None:
                plans = None
                break
            plans.append(plan)

        if plans is not None:
            return [action, plans]

    return None


# Initial state
initial_state = ('A', 'Dirty', 'Dirty')

plan = and_or_search(initial_state, [])

print("Conditional Plan:")
print(plan)