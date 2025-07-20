import math
x= float(input("Nhập số x : "))
y= float(input("Nhập số y : "))
z= float(input("Nhập số z : "))
print ('')
print('{0}>{1} là {2}'.format(x,y, x>y))
print('{0}!={1} là {2}'.format(y,z, y!=z))
print('({0}>{1}) and ({1}<{2}) là {3}'.format(x,y,z, (x>y)and (y<z)))
print ('({0}*{1})==({1}**{2}) là {3}'.format(x,y,z, (x*y)==(y**z)))
print ('not {0}!={1} là {2}'.format(x,y,not(x!=y)))
print ('')
print(math.fabs(x))
print(math.ceil(x))
print(math.floor(x))
print(math.pow(x,y)) #= x**y
print(math.exp(x))

