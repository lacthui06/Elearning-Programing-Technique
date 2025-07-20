# Find the Fibonacci series till term ≤ 100
a,b=0,1
s=0
for i in range (0,101):
    a=b
    b=s
    s=a+b
print (s)