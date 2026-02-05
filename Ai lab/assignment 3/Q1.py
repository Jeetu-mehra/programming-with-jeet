# 0 = clean, 1 = dirty
r = {
    "A": 1,
    "B": 0,
    "C": 1
}

loc = "B"
ms = 10
st = 1

def act(loc, r):
    # If current room dirty -> clean it
    if r[loc] == 1:
        return "SUCK"

    # If at B, decide where to go
    if loc == "B":
        if r["A"] == 1:
            return "LEFT"
        elif r["C"] == 1:
            return "RIGHT"
        else:
            return "NO_OP"

    # If at A, go right
    if loc == "A":
        return "RIGHT"

    # If at C, go left
    if loc == "C":
        return "LEFT"


print("---- Vacuum Cleaner Simulation ----\n")

while st <= ms:

    print("Step:", st)
    print("Loc:", loc)
    print("Rooms:", r)

    if r["A"] == 0 and r["B"] == 0 and r["C"] == 0:
        print("Action: NO_OP")
        print("All rooms clean. Stop.\n")
        break

    a = act(loc, r)
    print("Action:", a)

    if a == "SUCK":
        r[loc] = 0

    elif a == "LEFT":
        if loc == "C":
            loc = "B"
        elif loc == "B":
            loc = "A"

    elif a == "RIGHT":
        if loc == "A":
            loc = "B"
        elif loc == "B":
            loc = "C"

    elif a == "NO_OP":
        print("No operation needed. Stop.\n")
        break

    print("New Loc:", loc)
    print()

    st += 1
