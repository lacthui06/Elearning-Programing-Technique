import random
# print ("\u25CF \u2500 \u250C \u2510 \u2502 \u2514 \u2518")
# => ● ─ ┌ ┐ │ └ ┘
"┌─────────┐"
"│         │"
"│    ●    │"
"│         │"
"└─────────┘"
dice_art ={
    1:("┌─────────┐",
       "│         │",
       "│    ●    │",
       "│         │",
       "└─────────┘"),
    2:("┌─────────┐",
       "│  ●      │",
       "│         │",
       "│      ●  │",
       "└─────────┘"),
    3:("┌─────────┐",
       "│  ●      │",
       "│    ●    │",
       "│      ●  │",
       "└─────────┘"),
    4:("┌─────────┐",
       "│  ●   ●  │",
       "│         │",
       "│  ●   ●  │",
       "└─────────┘"),
    5:("┌─────────┐",
       "│  ●   ●  │",
       "│    ●    │",
       "│  ●   ●  │",
       "└─────────┘"),
    6:("┌─────────┐",
       "│  ●   ●  │",
       "│  ●   ●  │",
       "│  ●   ●  │",
       "└─────────┘"),}
dice=[]
total=0
num_dice=int(input('How many dice : '))
for die in range( num_dice):
    dice.append(random.randint(1,6))    # them vao dice rand
# Method 1 : dices are vertical
for die in range(num_dice):
    for pnj in dice_art.get(dice[die]): # trong pnj lay dice rand o tren tu dice_art
        print(pnj)
# Method 2 : dices are lying horizontal   
for line in range (5):
    for die in dice:
        print(dice_art.get(die)[line],end=" ")
    print()
for die in dice:
    total+=die
print(f"Your total : {total}")
