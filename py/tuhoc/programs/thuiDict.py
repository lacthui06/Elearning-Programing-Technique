dict={}
print('''           LAC THUI DICTIONARY\n
 Choose 1 : Add new vocabulary.
 Choose 2 : Research the meaning of vocabulary.
 Choose 3 : Delete vocabulary.
 Choose 4 : Print all vocabulary with meaning for user.
 Choose 5 : End program. ''')
while(True):
    user=int(input(' User choose 1,2,3,4 or 5 : '))
    if user==1:
        vocab=input(' Add vocabulary : ')
        mean=input(' Add meaning of vocabulary :')
        dict[vocab]=mean
        print(' Dictionary have :\n',dict,)
    elif user==2:
        vocab=input(' Enter the vocab you wanna know meaning : ')
        print(' Mean :',dict[vocab])
    elif user==3:
        delVocab=input(' Enter vocab you want to delete :')
        dict.pop(delVocab)
        print(' Dictionary have :\n',dict)
    elif user==4:
        print(' DICTIONARY HAVE :')
        for x,y in dict.items():
            print(x,':',y)
    elif user==5:
        break
    else:
        print(' Please enter correctly as required.')
    x=input(' Enter another to continue ')