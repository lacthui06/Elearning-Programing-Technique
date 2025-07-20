foods=[]
prices=[]
total=0
while True:
    food=input("Enter the food u wanna choice (enter 'q' to quit) : ")
    if food == 'q':
        break
    else:
        foods.append(food)
        price=int(input(f'Enter the price of {food} : '))
        prices.append(price)
for price in prices:
    total+=price
print("---------------- UR BILL ----------------")
print("Those are ur foods : ")
for food in foods:
    print(food,end=', ')
print()
print (f"Your total : {total}")