n = int(input(' nhập vào số n :'))
tong = 0
for i in range (n+1):
	tong+= i
print (' tổng =',tong)
print (' đếm đại theo qui tắc :')
for i in range (0,11,2):
	print(i)
print (' in list màu :')
colors = ['đỏ', 'xanh','vàng', 'tím']
for color in colors:
	print (color)
print ('')
for i in range(len(colors)):
	print (colors[i])