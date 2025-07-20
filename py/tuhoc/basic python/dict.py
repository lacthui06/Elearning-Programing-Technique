danhSach={
    'họ và tên' :'thúi anh lạc',
    'lớp' :'DA01',
    'ngày sinh':'22/11/06',
    'chiều cao':'168m'
}
print (danhSach)
print (danhSach.get('ngày sinh'))
print (danhSach['lớp'])
danhSach.update({'họ và tên':'thái anh lạc'})
print (danhSach)
danhSach.pop('lớp')
danhSach.popitem()
print(danhSach)
for x in danhSach:
    print(x)
for x in danhSach.values():
    print (x)
for x,y in danhSach.items():
    print(x,y)