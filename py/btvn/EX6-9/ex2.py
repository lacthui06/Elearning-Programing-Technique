# Write a Python program to count the number of strings from a given list of strings. 
# The string length is 2 or more and the first and last characters are the same.
list=['abc', 'xyz', 'aba', '1221']
count=0
for i in list:
    if len(list)>2 and i[0]==i[-1]:
        count+=1
print(count)