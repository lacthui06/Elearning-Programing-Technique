import time
my_time= int(input('Enter the time to countdown in seconds : '))
for i in range (my_time,0,-1):    # for i in reversed(range(0,my_time)):
    hours = i//3600
    seconds = i % 60
    minutes = (i //60)%60
    print(f"{hours:02}:{minutes:02}:{seconds:02}")
    time.sleep(1)
print('HAPPY NEW YEAR')

def count(start,end):
    for x in range(start,end+1):
        print(x)
        time.sleep(1)
    print("DONE")
count(0,5)