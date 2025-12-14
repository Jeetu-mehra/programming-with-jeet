import pandas as pd

# Sample DataFrame representing the next 10 days
data = {
    "day": pd.date_range(start="2025-04-10", periods=10, freq="D"),
    "John": [True, False, True, False, False, True, False, False, True, False],
    "Judy": [True, False, False, False, True, True, False, True, False, False],
}

df = pd.DataFrame(data)

# Identify days when both John and Judy are present (party days)
df["party"] = df["John"] & df["Judy"]

# Compute days_til_party
df["days_til_party"] = df["party"][::-1].cumsum()[::-1] - df["party"].astype(int)

# Print the result
print(df[["day", "John", "Judy", "party", "days_til_party"]])