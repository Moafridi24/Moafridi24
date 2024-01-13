#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CUSTOMERS 100

struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};  
void displayMenu();
void addCustomer(struct Customer customers[], int *numCustomers);
void viewCustomer(struct Customer customers[], int numCustomers);
void deposit(struct Customer customers[], int numCustomers);
void withdraw(struct Customer customers[], int numCustomers);

int main() {
    struct Customer customers[MAX_CUSTOMERS];
    int numCustomers = 0;
    int choice;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCustomer(customers, &numCustomers);
                break;
            case 2:
                viewCustomer(customers, numCustomers);
                break;
            case 3:
                deposit(customers, numCustomers);
                break;
            case 4:
                withdraw(customers, numCustomers);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
void displayMenu() {
    printf("\n=== Banking Management System ===\n");
    printf("1. Add Customer\n");
    printf("2. View Customer\n");
    printf("3. Deposit\n");
    printf("4. Withdraw\n");
    printf("5. Exit\n");
}
void addCustomer(struct Customer customers[], int *numCustomers) {
    if (*numCustomers < MAX_CUSTOMERS) {
        struct Customer newCustomer;
        printf("Enter account number: ");
        scanf("%d", &newCustomer.accountNumber);
        printf("Enter name: ");
        scanf("%s", newCustomer.name);
        printf("Enter initial balance: ");
        scanf("%f", &newCustomer.balance);

        customers[*numCustomers] = newCustomer;
        (*numCustomers)++;
        printf("Customer added successfully.\n");
    } else {
        printf("Maximum number of customers reached.\n");
    }
}
void viewCustomer(struct Customer customers[], int numCustomers) {
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accountNumber) {
            printf("Account Number: %d\n", customers[i].accountNumber);
            printf("Name: %s\n", customers[i].name);
            printf("Balance: %.2f\n", customers[i].balance);
            return;
        }
    }

    printf("Customer not found.\n");
}
void deposit(struct Customer customers[], int numCustomers) {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accountNumber) {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            customers[i].balance += amount;
            printf("Deposit successful. Updated balance: %.2f\n", customers[i].balance);
            return;
        }
    }

    printf("Customer not found.\n");
}
void withdraw(struct Customer customers[], int numCustomers) {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accountNumber) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= customers[i].balance) {
                customers[i].balance -= amount;
                printf("Withdrawal successful. Updated balance: %.2f\n", customers[i].balance);
            } else {
                printf("Insufficient funds.\n");
            }
            
            return;
        }
    }

    printf("Customer not found.\n");
}
