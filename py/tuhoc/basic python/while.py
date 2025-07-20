n=-1
while (n<=0):
    n = int(input(' Nhập số nguyên dương : '))
Ketqua =""
while (n>0):
    Ketqua = str(n%2)+Ketqua
    print('n chia 2 có phần dư = ', n%2)
    n = n//2
    print('n chia 2 có phần nguyên = ', n//2)
print(' Kết quả :', Ketqua)