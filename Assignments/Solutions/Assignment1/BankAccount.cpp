#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Setters
    void setAccountNumber(int num) { accountNumber = num; }
    void setAccountHolderName(string name) { accountHolderName = name; }
    void setBalance(double amt) { balance = amt; }

    // Getters
    int getAccountNumber() { return accountNumber; }
    string getAccountHolderName() { return accountHolderName; }
    double getBalance() { return balance; }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully!\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!\n";
        }
        else if (amount > balance) {
            cout << "Insufficient balance!\n";
        }
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully!\n";
        }
    }

    // Display account details
    void displayAccountDetails() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    // Accept initial account details
    cout << "Enter Account Number: ";
    int accNo;
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    string name;
    cin >> name;

    cout << "Enter Initial Balance: ";
    double bal;
    cin >> bal;

    account.setAccountNumber(accNo);
    account.setAccountHolderName(name);
    account.setBalance(bal);

    while (true) {
        cout << "\n===== MENU =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            double amt;
            cout << "Enter amount to deposit: ";
            cin >> amt;
            account.deposit(amt);
            break;
        }
        case 2: {
            double amt;
            cout << "Enter amount to withdraw: ";
            cin >> amt;
            account.withdraw(amt);
            break;
        }
        case 3:
            account.displayAccountDetails();
            break;

        case 4:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
