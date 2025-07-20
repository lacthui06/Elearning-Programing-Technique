import random
box=set()
while(True):
    print("-------------PRIZE DRAWING PROGRAM----------------")
    print('Choose 1 : Enter your phone number.')
    print('Choose 2 : Random Lucky Spin')
    print('Choose 3 : End the program')
    print('Box have :',box)
    user=int(input('User choose 1,2 or 3 : '))
    if (user==1):
        phone_num=input('Enter ur phone number : ')
        box.add(phone_num)
    elif (user==2):
        index=random.randint(0,len(box)-1)      # bởi vì len đếm từ gtri 0->n nên phải lấy n-1
        print('Winner location',str(index))

        i=0
        for x in box:
            if i == index:
                break
        print('CONGRATULATION',x,'WON THE PRIZE')
        box.discard(x)
    else:
        break
    n=input('Enter another number to continue ')