# Find the factorial of given positive integer N.
N = int(input('Enter a positive integer N : '))
factorial=1
for i in range (1,N+1):
    factorial*=i
print('The factorial of {0} is'.format(N),factorial)