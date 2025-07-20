# The user will enter the number of eggs gathered and the program will output the number of dozens as well as the number of excess eggs.
eggs=int(input('Enter the number of eggs you have : '))
if (eggs<12):
    print ('Less than 1 dozen')
elif (eggs==12):
    print ('You have 1 dozen of eggs and not excess eggs')
elif (eggs%12==0):
    print ('You have {0} dozens of eggs and not excess eggs'.format(eggs//12))
else:
    (eggs%12!=0)
    print ('You have {0} dozens of eggs and exccess {1} eggs'.format((eggs//12),(eggs%12)))