truong ={'gò vấp', 'thanh đa', 'trung trực'}
lop =['12a','10c','101e']
truong.update(lop)
print(truong)
truong.remove('101e')
print (truong)
truong.discard(truong) #nếu phần tử có trong set sẽ bị xóa nếu không thì không ảnh hưởng
truong.pop() #xóa ptu cuối trong set
print(truong)
del (lop) #xóa biến 'lop' ra khỏi ctrinh luôn