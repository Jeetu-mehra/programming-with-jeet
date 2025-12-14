import pandas as pd

# a) Date time object for Jan 15, 2012
dt1 = pd.Timestamp("2012-01-15")

# b) Specific date and time of 9:20 pm
dt2 = pd.Timestamp("2012-01-15 21:20")

# c) Local date and time
dt3 = pd.Timestamp.now()

# d) A date without time
dt4 = dt3.normalize()  # Removes the time part

# e) Current date
dt5 = pd.Timestamp.today().date()

# f) Time from a date time
dt6 = dt3.time()

# g) Current local time
dt7 = pd.Timestamp.now().time()

# Print all results
print(f"a) Date time object: {dt1}")
print(f"b) Specific date and time: {dt2}")
print(f"c) Local date and time: {dt3}")
print(f"d) Date without time: {dt4}")
print(f"e) Current date: {dt5}")
print(f"f) Time from a date time: {dt6}")
print(f"g) Current local time: {dt7}")