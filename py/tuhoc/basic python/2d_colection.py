'''vegetables=['celery',"carrots","tomatoes"]
meats=['kangaroos','turkey','salmon']
fruits=['guava','tangerines','plum']
groceries=[vegetables,meats,fruits]
print(groceries)'''
groceries=[{'celery',"carrots","tomatoes"},
            {'kangaroos','turkey','salmon'},
            {'guava','tangerines','plum'}]
print(groceries)
for collection in groceries:
    for food in collection:
        print(food, end=' ')
    print() # it will work by sort like above list