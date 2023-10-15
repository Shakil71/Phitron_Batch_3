class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_amount = 100
        self.max_amount = 10000000
    def get_balance(self,balance):
        self.balance = balance
    def deposit(self,amount):
        if amount > 0:
            self.balance += amount
    def withdraw(self,amount):
        if amount < self.min_amount:
            print(f'Fakir, You can not withdraw less the {self.min_amount} taka')
        elif amount > self.max_amount:
            print(f'Hey Rich kid, You can not withdraw more than {self.max_amount} taka')
        else:
            self.balance -= amount;
            print(self.balance)
dbbl = Bank(1000000)
dbbl.withdraw(11160000)




