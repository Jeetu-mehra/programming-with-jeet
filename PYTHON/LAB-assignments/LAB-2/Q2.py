# Write a program that repeatedly asks the user to enter product names and prices. Store all
# of these in a dictionary whose keys are the product names and whose values are the prices.
# When the user is done entering products and prices, allow them to repeatedly enter a
# product name and print the corresponding price or a message if the product is not in the
# dictionary.
dict={}
while(1):
    product=input("Enter Product name OR 'done' to exit: ")
    if(product=='done'): break
    value=input("Enter Product value: ")
    dict[product]=value
print(dict)
search=input("search price of any product: ")
for pro in dict:
    if(pro==search):
        print(dict[pro])
