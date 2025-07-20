def check_odd_even(n):
    return 'even' if n%2 else 'odd'
n=int(input('Enter an integer : '))
print(f'The number is {check_odd_even(n)}')