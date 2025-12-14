#taking number of members

n = int(input("Enter the number of members."))
heights = []
for i in range(n):
    heights.append(float(input(f"Enter the height of member {i+1}")))

sorted_heights = sorted(heights)

i=0
count=0
while heights != sorted_heights:
    if heights[i] != sorted_heights[i]:
        for j in range(n):
            if heights[j] == sorted_heights[i]:
                temp = heights[i]
                heights[i] = heights[j]
                heights[j] = temp
                count+=1
                i+=1
    else:
        i+=1

print(f"minimum swaps = {count}")