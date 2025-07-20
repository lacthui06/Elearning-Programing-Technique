n=6
print(' '*3,end='')
for i in range (1,n):
    print(f'{i:4d}',end='')
print()
print('-'*4*n)
for i in range(1,n):
    print(f'{i:4d}!',end='')
    for j in range (1,n):
        print(f'{i*j:4d}',end='')
    print()
name=input('Enter your name : ')
for c in name:
    if c==' THAI':
        break
    print(c,end=' ')
'''s=0
for i in range(1,21):
    if i==10 or i==11:
        continue
    s+=i
print('SUM IS :',s)'''