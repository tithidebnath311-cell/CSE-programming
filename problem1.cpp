#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;
public:
    void setAccountNumber(int accountNumber) { this->accountNumber = accountNumber; }
    void setAccountHolder(string accountHolder) { this->accountHolder = accountHolder; }
    void setBalance(double balance) { 
        if(balance >= 0) this->balance = balance; 
        else cout << "Error: Balance cannot be negative!" << endl;
    }

    int getAccountNumber() { return accountNumber; }
    string getAccountHolder() { return accountHolder; }
    double getBalance() { return balance; }
};

int main() {
    BankAccount acc;
    acc.setAccountNumber(12345);
    acc.setAccountHolder("John Doe");
    acc.setBalance(1000.0);
    return 0;
}