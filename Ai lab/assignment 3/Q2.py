# Simple Reflex Agent for Indian Railways Level Crossing

def reflex_agent(percept):
    inbound, outbound, obstacle, emergency = percept

    # Highest priority: Manual Emergency
    if emergency == "Active":
        return ("LOWER", "ON", "RED")

    # Second priority: Obstacle detected
    if obstacle == "Obstacle":
        return ("LOWER", "ON", "RED")

    # Train approaching
    if inbound == "Train" or outbound == "Train":
        return ("LOWER", "ON", "GREEN")

    # Safe condition
    return ("RAISE", "OFF", "GREEN")

print("---- Level Crossing Simulation ----\n")

# Each percept = (Inbound, Outbound, Obstacle, Emergency)
percepts = [
    ("Train", "No Train", "Clear", "Neutral"),
    ("Train", "No Train", "Obstacle", "Neutral"),
    ("No Train", "No Train", "Clear", "Neutral"),
    ("No Train", "No Train", "Clear", "Active")
]

step = 1
for percept in percepts:
    action = reflex_agent(percept)

    print(f"Step {step}")
    print(f"Percept  : Inbound={percept[0]}, Outbound={percept[1]}, "
          f"Obstacle={percept[2]}, Emergency={percept[3]}")
    print(f"Action   : Gate={action[0]}, Siren={action[1]}, Train Signal={action[2]}")
    # print("Location : Railway Level Crossing\n")

    step += 1
