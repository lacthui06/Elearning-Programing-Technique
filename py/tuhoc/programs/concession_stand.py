print("                 MENU")
menu={"pho" : 25,
      "pan-seared chicken liver" :30,
      "bun dau mam tom" : 50,
      "roasted chicken" : 50,
      "braised fish" : 30,
      "grilled snakehead fish" : 80,
      "goat hotpot" : 80,
      "pangasius conchophilus fry" : 50, # Ca hu chien
      "beef in vinegar hotpot" : 60,
      "vn broken rice": 25}
cart=[]
total=0
for key,value in menu.items():
    print (f"{key:28} : {value:.3f}")
print()
while True:
    food =input('Enter the food (q to quit) : ').lower()
    if food=="q":
        break
    elif menu.get(food) is not None:
        cart.append(food)
print("          YOUR BILL")
for food in cart:
    total+=menu.get(food)
    print(food)
print(f"Your total : {total:.3f} VND")
