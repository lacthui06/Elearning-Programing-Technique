def show_balance():
    print(f"Your balance : {balance} VND")

def deposit():
    amount = float(input("Enter amount to be deposit (VND): "))
    if amount < 1 : 
        print("That is not valid ")
        return 0
    else:
        return amount
def withdraw():
    amount =float(input("Enter amount to be withdraw : "))
    if amount>balance:
        print("Insufficient funds")
        return 0
    elif amount <0:
        print("Amount must be greater than 0")
        return 0
    else:
        return amount
def main():
    balance=0
    while True:
        print('''   
            YING LE BANK

            1. Show Balance
            2. Deposit
            3. Withdraw
            4. Exit''',)
        try :
            choice=int(input("Choose 1,2,3 or 4: "))
            if choice==1:
                show_balance()
            if choice==2:
                balance += deposit()
            if choice==3:
                balance-=withdraw()
            if choice==4:
                break
        except ValueError and TypeError:
            pass
            print("Please choose again")
    print("HAVE A NICE DAY")
    
if __name__ == '__main__':
    main()