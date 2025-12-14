/* 3. Create a Structure called BankMgmt with AccNumber, CustName, AvlBalance,
 AccType as members. Implement a Bank management Application as menu driven
 program for the above said Structure scenario.
 Menu Option:
 1. Withdrawal 2. Deposit 3. Display Balance 4. Exit
 If option
 1 is chosen- Amount can be withdrawn from the account (Withdrawn amount
 should be given as input). For withdrawal the condition is- the AvlBalance must be
 greater than withdrawn amount).
 2 is chosen- Amount can be deposited to the account (the deposited amount
 should be given as input). The deposited amount should be reflected in AvlBalance of
 the account.
 3 is chosen- Current available balance (AvlBalance) of the AccNumber should
 be Displayed with other details
 4 is chosen- Exit from the application
 Sample Input:
 SB 100155 VenkatKrishna 4500.00 Saving */
#include <stdio.h>
#include <stdlib.h>

struct BankAccount {
    char accountType[3];  // Account type: e.g., "SB" for Savings
    int accountNumber;
    char accountHolderName[100];
    float availableBalance;
    char accountCategory[10];  // e.g., "Saving"
};

void withdrawal(struct BankAccount *account) {
    float amount;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);
    
    if (account->availableBalance >= amount) {
        account->availableBalance -= amount;
        printf("Withdrawal successful. New balance: %.2f\n", account->availableBalance);
    } else {
        printf("Insufficient balance for withdrawal.\n");
    }
}

void deposit(struct BankAccount *account) {
    float amount;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);
    
    account->availableBalance += amount;
    printf("Deposit successful. New balance: %.2f\n", account->availableBalance);
}

void displayBalance(struct BankAccount *account) {
    printf("\nAccount Details:\n");
    printf("Account Type: %s\n", account->accountType);
    printf("Account Number: %d\n", account->accountNumber);
    printf("Account Holder: %s\n", account->accountHolderName);
    printf("Available Balance: %.2f\n", account->availableBalance);
    printf("Account Category: %s\n", account->accountCategory);
}

int main() {
    struct BankAccount account = {"SB", 100155, "Venkat Krishna", 4500.00, "Saving"};
    
    int choice;
    
    do {
        printf("\nMenu Options:\n");
        printf("1. Withdrawal\n");
        printf("2. Deposit\n");
        printf("3. Display Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                withdrawal(&account);
                break;
            case 2:
                deposit(&account);
                break;
            case 3:
                displayBalance(&account);
                break;
            case 4:
                printf("Exiting the application.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}