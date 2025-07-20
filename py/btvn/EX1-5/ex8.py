# Check whether given integer value is PRIME or NOT.
import math
n=int(input('Enter an integer : '))
if n<2:
    print(n,'is not prime number')
else:
    for i in range (2,int(math.sqrt(n))+1):
        if n % i == 0:
            print (n,'is not prime number')
            break
    else:
        print(n,'is prime number')