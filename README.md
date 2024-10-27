# Banking-System-
A C++ banking system program simulates basic banking operations, such as creating accounts, depositing, withdrawing, and displaying account details. It uses structures to manage account information, and a menu-driven interface with switch statements for user interaction. Input validation ensures smooth operation, and functions keep the code modular
Features
Create Account: Add new accounts with account numbers, holder names, and initial balance.
Deposit: Add money to an existing account.
Withdraw: Withdraw money, with balance validation.
Display Account Details: View details of a specific account.
Exit: Close the program safely.
Program Structure
Account Structure: Stores account number, holder name, and balance.
Functions:
createAccount(): Adds a new account.
deposit(): Deposits money into an account.
withdraw(): Withdraws money if sufficient balance exists.
displayAccount(): Displays account details.
findAccount(): Searches for an account by its number.
Error Handling
Invalid inputs (like non-integer for menu choice) are handled with input validation.
Insufficient balance checks during withdrawals.
If an account is not found, a suitable message is displayed.

