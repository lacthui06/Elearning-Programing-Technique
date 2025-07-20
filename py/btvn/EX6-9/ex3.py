#Enter the list containing numbers
list=[]
n=int(input('Enter how many numbers do you want : '))
for n in range(n):
    enter=int(input(f'Enter the {n+1} number :'))
    list.append(enter)
print(list)
# Check if a list is empty
if not list:
    print('List is empty')
else:
    print('List is not empty')
# Remove duplicates from a list
# Method 1
check=int(input('Check the number duplicates : '))
c=list.count(check)
for i in range(c-1):
    list.remove(check)
print(list)
# Method 2
num_list=set(list)
print(num_list)
# Clone a list
cop=list.copy()
print(cop)
# Find words longer than a given length from a list of words.
list=['lạc','khôi','khương','đô']
length=3
for x in list:
    if len(x)>length:
        list=x
        print(list)