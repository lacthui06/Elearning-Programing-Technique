# Convert a string to a list.
str='lạc,khôi,khương,đô'
list=str.split(',')
print(list)
# Calculate the difference between the two lists
list1=['lac','khoi','khuong']
list2=['khoi','khuong','do']
diff1=list(set(list1).difference(set(list2)))
diff2=list(set(list2).difference(set(list1)))
diff=diff1+diff2
print(diff)
# Append a list to the second list and sort this new list
list1.extend(list2)
print(list1)
# Check if all items in a given list of strings are equal to a given string
listt=['khuong','khoi']
listt1=['khuong','lac','khoi']
if listt != listt1:
    print(False)
else:
    print(True)
# Insert a given string at the beginning of all items in a list.
list=[1,2,3,4]
string='emp'
for i in range (len(list)):
    list[i]=string + str(list[i])
print(list)
# Find items starting with a specific character from a list.
item=['abcd', 'abc', 'bcd', 'bkie', 'cder', 'cdsw', 'sdfsd', 'dagfa', 'acjd']
characters = ['a', 'd', 'w']
filterd_item={char:[item for item in item if item.startswith(char)] for char in characters}