from admin import Admin
from bank import BankAccount
import random

while True:
    print("<---Welcome to Banking Management system--->")
    choice = input("* Login 'l' / register 'r' / leave 'b' : ")
    if (choice == 'l'):
        person = input("* enter as a user 'u' or admin 'a' :")
        if (person == 'u'):
            name = input(" Name :  ")
            email = input("Email : ")
            user = None
            for account in Admin.users:
                if (name == account.name and email == account.email):
                    print("logged in as user : ", name)
                    user = account
                    break
            while True:
                print("\nOptions:")
                print("1. Deposit")
                print("2. Withdraw")
                print("3. Check Balance")
                print("4. Take Loan")
                print("5. Transfer")
                print("6. View Transaction History")
                print("0. Logout")
                try:
                    op = int(input("Enter option : "))
                    if (op == 1):
                        user.deposit(amount=float(input("enter  amount : ")))
                    elif op == 2:
                        user.withdraw(amount=float(input("enter  amount : ")))
                    elif op == 3:
                        user.check_balance()
                    elif op == 4:
                        user.take_loan(amount=float(input("enter amount : ")))
                    elif op == 5:
                        name = input("enter name : ")
                        amount = float(input("enter amount : "))
                        for account in Admin.users:
                            if account.name == name:
                                user.transfer(account, amount)
                                break
                        else:
                            print("No such user found")

                    elif op == 6:
                        user.check_transaction_history()
                    elif op == 0:
                        break
                    else:
                        print(
                            "Invalid op. Please enter a number between 0 and 6.")
                except ValueError:
                    print("Invalid input. Please enter a valid number.")

        if (person == 'a'):
            name = input("Name :  ")
            email = input("Email : ")
            admin_pin = int(input("Admin pincode : "))

            for account in Admin.users:
                if (name == account.name and email == account.email and admin_pin == Admin.authorizationCode):
                    print("logged in as admin : ", name)
                    admin = Admin()
                    break
            while True:
                print("\nAdmin Options:")
                print("1. Create Account")
                print("2. Delete Account")
                print("3. See Account List")
                print("4. Check Total Balance")
                print("5. Check Total Loan")
                print("6. Toggle Loan Feature")
                print("0. Logout")
                try:
                    op = int(input("enter op : "))
                    if (op == 1):
                        name = input("enter name : ")
                        email = input("enter email : ")
                        address = input("enter address : ")
                        ac_type = input("enter account type : ")
                        pincode = input("enter your pincode : ")
                        admin = Admin()
                        admin.create_account(
                            name, email, address, ac_type, pincode)
                    elif op == 2:

                        admin.delete_account(
                            account_number=input("enter account number : "))
                    elif op == 3:
                        for users in Admin.users:
                            print(users.name)
                            print(users.email)
                            print(users.address)
                            print('\n')
                    elif op == 4:

                        admin.check_total_balance()
                    elif op == 5:

                        admin.check_total_loan_amount()
                    elif op == 6:
                        admin.toggle_loan_feature(
                            status=input("enter on or off : "), name=input("enter name : "))
                    elif op == 0:
                        break
                except ValueError:
                    print("Invalid input. Please enter a valid number.")

    elif (choice == 'r'):
        person = input("* register as a user 'u' or admin 'a' :")
        if person == 'u':
            name = input("enter name : ")
            email = input("enter email : ")
            address = input("enter address : ")
            ac_type = input("enter account type : ")
            pincode = input("enter your pincode : ")
            user = BankAccount(name, email, address, ac_type, pincode)
            Admin.users.append(user)
            print("account number : ", user.account_number)
            print("account creation successful ")
        elif person == 'a':
            name = input("enter name : ")
            email = input("enter email : ")
            address = input("enter address : ")
            ac_type = input("enter account type : ")
            pincode = input("enter your pincode : ")
            admin = Admin()
            admin.create_account(name, email, address, ac_type, pincode)
            print("account creation successful for further opeartion login again")
    elif (choice == 'b'):
        break