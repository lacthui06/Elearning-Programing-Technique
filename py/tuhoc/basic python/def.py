list=[]
# nhap n>=1
while(True):
    try:
        n = int(input('Enter the number of element : '))
    except:
        print('Please enter a number greater than 0')
    if n>=1:
        break
# ham nhap
def nhap(n,list):
    for i in range (n):
        list.append(int(input(('Enter element number '+str(i+1)+': '))))
# tinh tong
def sum(list):    
    sum=0
    for x in list:
        sum+=x   
    return sum

nhap(n,list)
print('Sum = '+str(sum(list)))


# 
def factorial(num):
    fac=1
    for i in range(1,num+1):
        fac*=i
    return fac
n=int(input('Enter n = '))
k=int(input('Enter k = '))
if n <=k:
    binom=0
else:
    binom=factorial(n)//(factorial(k)*factorial(n-k))
print('Binomial coefficent :',binom)