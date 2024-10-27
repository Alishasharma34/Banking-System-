#include <iostream>
#include <string>
using namespace std;

struct Account {
    int accountNumber;
    string accountHolder;
    double balance;
};

void createAccount(Account accounts[], int &numAccounts) {
    cout << "Enter account number: ";
    cin >> accounts[numAccounts].accountNumber;
    cout << "Enter account holder name: ";
    cin.ignore();
    getline(cin, accounts[numAccounts].accountHolder);
    cout << "Enter initial balance: ";
    cin >> accounts[numAccounts].balance;
    numAccounts++;
    cout << "Account created successfully!\n";
}

void displayAccount(const Account &account) {
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Account Holder: " << account.accountHolder << endl;
    cout << "Balance: $" << account.balance << endl;
}

void deposit(Account &account) {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    account.balance += amount;
   cout << "Deposit successful! New Balance: $" << account.balance << endl;
}

void withdraw(Account &account) {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > account.balance) {
        cout << "Insufficient balance!\n";
    } else {
        account.balance -= amount;
        cout << "Withdrawal successful! New Balance: $" << account.balance << endl;
    }
}

int findAccount(const Account accounts[], int numAccounts, int accountNumber) {
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            return i;
        }
    }
    return -1;
}

int main() {
 const int MAX_ACCOUNTS = 100;
    Account accounts[MAX_ACCOUNTS];
    int numAccounts = 0;
    int choice;

    do {
        cout << "\nBanking System Menu:\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                createAccount(accounts, numAccounts);
                break;
            }
            case 2: {
                int accountNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
                int index = findAccount(accounts, numAccounts, accountNumber);
                if (index != -1) {
                    deposit(accounts[index]);
                } else {
                    cout << "Account not found!\n";
                }
                break;
            }
            case 3: {
 int accountNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
                int index = findAccount(accounts, numAccounts, accountNumber);
                if (index != -1) {
                    withdraw(accounts[index]);
                } else {
                    cout << "Account not found!\n";
                }
                break;
            }
            case 4: {
                int accountNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
                int index = findAccount(accounts, numAccounts, accountNumber);
                if (index != -1) {
                    displayAccount(accounts[index]);
                } else {
                    cout << "Account not found!\n";
                }
                break;
            }
            case 5:
                cout << "Exiting the system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
 } while (choice != 5);

return 0;
}