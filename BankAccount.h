/* This is the header file of BankAccount class*/

#include <iostream>
using namespace std;
class BankAccount {
public:
    BankAccount(); // Constructor function
    virtual ~BankAccount(); // Destructor function
    // Setter functions
    void setName(string name);
    void setBalance(int amount);
    // Getter functions
    string getName();
    int getBalance();
    // other functions    
    bool deposit(int amount);
    bool withdraw(int amount);
    void transfer(int amount, BankAccount& recipient);
private:
    string name;
    int balance;
};
