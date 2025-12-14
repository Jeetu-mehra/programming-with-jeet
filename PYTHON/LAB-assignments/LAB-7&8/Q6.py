class BankAccount:
    def __init__(self, account_number, balance=0.0):
        self.account_number = account_number
        self.balance = balance

    def deposit(self, amount):
        """Deposits a specified amount into the account."""
        if amount > 0:
            self.balance += amount
            print(f"Deposited {amount}. New balance: {self.balance}")
        else:
            print("Deposit amount must be positive!")

    def withdraw(self, amount):
        """Withdraws a specified amount from the account if funds are sufficient."""
        if 0 < amount <= self.balance:
            self.balance -= amount
            print(f"Withdrew {amount}. New balance: {self.balance}")
        else:
            print("Insufficient funds or invalid amount!")

    def display(self):
        """Displays account details."""
        print(f"Account Number: {self.account_number}")
        print(f"Balance: {self.balance}")

# Example Usage
if __name__ == "__main__":
    acc_number = input("Enter account number: ")
    initial_balance = float(input("Enter initial balance: "))
    account = BankAccount(acc_number, initial_balance)
    
    while True:
        print("\n1. Deposit\n2. Withdraw\n3. Display Account Details\n4. Exit")
        choice = input("Enter your choice: ")
        
        if choice == "1":
            amount = float(input("Enter deposit amount: "))
            account.deposit(amount)
        elif choice == "2":
            amount = float(input("Enter withdrawal amount: "))
            account.withdraw(amount)
        elif choice == "3":
            account.display()
        elif choice == "4":
            print("Exiting... Thank you!")
            break
        else:
            print("Invalid choice! Please try again.")
