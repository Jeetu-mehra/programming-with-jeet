import pandas as pd

# Example data: asking prices and fair prices
asking_prices = pd.Series([15000, 18000, 22000, 25000, 27000])
fair_prices = pd.Series([16000, 17500, 23000, 24000, 28000])

# Finding indices where asking price is less than fair price
good_deals = asking_prices[asking_prices < fair_prices].index.tolist()

# Print the indices of good deals
print("Good deal indices:", good_deals)