# Find Roots of Quadratic equation ax2 + bx + c = 0.
import math
print('Quadratic equation : ax^2 + bx + c = 0, (a≠0)')
a=float(input('Enter a : '))
b=float(input('Enter b : '))
c=float(input('Enter c : '))
print('Find Roots of Quadratic equation {0}x2 + {1}x + {2} = 0'.format(a,b,c))
delta=b**2-4*a*c
if delta<0:
    print('Quadratic equation has no solution')
elif delta==0:
    x=-b/(2*a)
    print('The roots of quadratic equation : x1=x2=',x)
elif delta>0: 
    x1=(-b+math.sqrt(delta))/(2*a)
    x2=(-b-math.sqrt(delta))/(2*a)
    print('The roots of quadratic equation : x1={0} , x2={1}'.format(x1,x2))