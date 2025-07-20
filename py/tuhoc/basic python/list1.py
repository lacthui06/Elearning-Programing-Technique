list=['thúi','thủm','thèm', 'thơm']
print (list)

list.append('bành')
print (list)

list[len(list):]=['bủm']
print (list)

print('list có', len(list),'phần tử')
list.insert(2,'bú')
print (list)
print ('số phần tử "bủm" ', list.count('bủm'))
if 'thủm' in list:
	list.remove('thủm')
	print(list)
print('')
list.pop(0) 
print (list)

list.reverse()
print (list)

list.sort()
print (list)

list.sort(reverse=True)
print (list)