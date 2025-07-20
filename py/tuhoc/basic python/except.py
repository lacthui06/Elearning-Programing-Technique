try:
    numerator=int(input('Enter numerator : '))
    denominator=int(input('Enter denominator : '))
    result=numerator/denominator
    print(result)
#except Exception:
    #print('Something went wrong')
except ZeroDivisionError as e:
    print(e)
    print('Denomitator must > 0')
except ValueError as e:
    print(e)
    print('Must enter a integer')
else:
    print(result)
finally:
    print('This will always excute')