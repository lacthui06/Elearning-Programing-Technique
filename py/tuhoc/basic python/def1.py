'''def hello(**kwargs):
    print('hêloo',end=' ')
    for key,value in kwargs.items():
        print(value,end=' ')
hello(title="Mr",first_name="thu'i",middle='anh',last='lạc')
'''
name ='Lac' #Global scope               # L=Local
def display_name():                     # E=Enclosing
    name ='coder' # local scope         # G=Global
    print(name)                         # B=Built-in>
print(name)
display_name()