import pandas as pd

# Sample dataset of concerts
concerts = pd.DataFrame({
    "date": pd.to_datetime([
        "2025-01-15", "2025-01-20", "2025-02-10", "2025-02-15",
        "2025-03-05", "2025-03-10", "2025-01-25", "2025-02-20",
    ]),
    "artist": ["A", "B", "A", "C", "B", "C", "A", "B"],
    "venue": ["X", "Y", "X", "Z", "Y", "Z", "X", "Y"],
})

# Extract year-month from date
concerts["year_month"] = concerts["date"].dt.to_period("M")

# Count concerts per (artist, venue) per year-month
grouped = concerts.groupby(["year_month", "artist", "venue"]).size().reset_index(name="count")

# Pivot to wide format
wide_table = grouped.pivot(index="year_month", columns=["artist", "venue"], values="count").fillna(0)

# Print the result
print(wide_table)