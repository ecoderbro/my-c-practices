#include <iostream>
using namespace std;

class BankAccount {
    double amount;
private:                // Hidden - can't touch directly
    double balance;
    string password;

public:                 // Public interface - can use these
    // Safe way to deposit
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }
    
    // Safe way to check balance
    double getBalance() {
        cout<< "your balance is:";
        return amount;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.deposit(100.0);
    myAccount.getBalance();   // OK - using public method
    
    // myAccount.balance = 1000000;  // ERROR! Can't access private
    // cout << myAccount.password;   // ERROR! Can't see private
}