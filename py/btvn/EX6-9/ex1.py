# Enter the list containing numbers
list=[]
n=int(input('Enter how many numbers do you want : '))
for i in range(n):
    number = int(input(f"Enter the {i+1} number: "))
    list.append(number)
print(list)
# Calculate the sum of all items in a list
s=0
for x in list:
    s+=x
print('Sum of list =',s)
# Find the largest number in a list
max=max(list)
print(f'The largest number in list : {max}')
# Find the smallest number in a list
min=min(list)
print(f'The smallest number in list : {min}')
# Check if each number is prime in a given list of numbers. Return True if all numbers are prime otherwise False.
import math
prime = True
for num in list:
    if num <= 1:
        prime = False
        break
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            prime = False
            break
print(prime)