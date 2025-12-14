class Bank:
    def __init__(self):
        self.accounts = {}

    def create_account(self, account_number, name, balance=0):
        """Creates a new account with an initial balance."""
        if account_number in self.accounts:
            print("Account already exists!")
            return
        self.accounts[account_number] = {'name': name, 'balance': balance}
        print(f"Account created for {name} with balance {balance}")

    def deposit(self, account_number, amount):
        """Deposits money into an account."""
        if account_number not in self.accounts:
            print("Account not found!")
            return
        self.accounts[account_number]['balance'] += amount
        print(f"Deposited {amount}. New balance: {self.accounts[account_number]['balance']}")

    def withdraw(self, account_number, amount):
        """Withdraws money from an account if sufficient balance exists."""
        if account_number not in self.accounts:
            print("Account not found!")
            return
        if self.accounts[account_number]['balance'] < amount:
            print("Insufficient balance!")
            return
        self.accounts[account_number]['balance'] -= amount
        print(f"Withdrawn {amount}. New balance: {self.accounts[account_number]['balance']}")

    def check_balance(self, account_number):
        """Checks the balance of an account."""
        if account_number not in self.accounts:
            print("Account not found!")
            return
        print(f"Balance for {self.accounts[account_number]['name']}: {self.accounts[account_number]['balance']}")

# Example Usage
if __name__ == "__main__":
    bank = Bank()
    while True:
        print("\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Exit")
        choice = input("Enter your choice: ")
        
        if choice == "1":
            acc_number = int(input("Enter account number: "))
            name = input("Enter account holder name: ")
            balance = float(input("Enter initial balance: "))
            bank.create_account(acc_number, name, balance)
        elif choice == "2":
            acc_number = int(input("Enter account number: "))
            amount = float(input("Enter amount to deposit: "))
            bank.deposit(acc_number, amount)
        elif choice == "3":
            acc_number = int(input("Enter account number: "))
            amount = float(input("Enter amount to withdraw: "))
            bank.withdraw(acc_number, amount)
        elif choice == "4":
            acc_number = int(input("Enter account number: "))
            bank.check_balance(acc_number)
        elif choice == "5":
            print("Exiting... Thank you!")
            break
        else:
            print("Invalid choice! Please try again.")
