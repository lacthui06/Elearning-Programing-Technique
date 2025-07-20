import random
n=random.randint(1,10)
print(n)
list =[1,2,3,'keo','bua','bao']
rand=random.choice(list)
random.shuffle(list)
print(rand,list)