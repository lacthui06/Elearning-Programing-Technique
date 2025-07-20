# Given list of numbers a0, a1,…., an-1:
n=int(input('How many numbers do you want : '))
list=[]
for i in range (n):
    list.append(int(input()))
# a) Find sum of all elements in the list.
print('a)')
s=0
for i in list:
    s+=i
print('Sum of list :',s)
# b) Print all elements in the list.
print('b)')
print('List :',list)
# c) Print all negative elements in the list
print('c)')
for i in list:
    if i<0:
        print('Negative elements in the list',i)
# d) Check whether all elements in the list are positive or NOT
print('d)')
for i in list:
    if i<0:
        print(i,'is not positive element')
    else:
        print(i,'is positive element')
# e) Find minimum and maximum element in the list.
print('e)')
print('Minimum element in list', min(list))
print('Maximum element in list',max(list))
# f) Sort the list in increasing order
print('f)')
list.sort()
print(list)