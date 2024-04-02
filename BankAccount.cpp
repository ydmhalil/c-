/* This is the implementation file (.cpp) of class BankAccount
 * Note: The implementation file must include the header file (.h) of its class  
 */

#include "BankAccount.h"

BankAccount::BankAccount() {
    balance = 0;
    cout<<endl<<"You are in Constructor. Creating an object of BankAccount class...";
}
BankAccount::~BankAccount() {
}
void BankAccount::setName(string name){
    this->name = name;
}
void BankAccount::setBalance(int amount){
    balance = amount;
}
string BankAccount::getName(){
    return name;
}
int BankAccount::getBalance(){
    return balance;
}
bool BankAccount::deposit(int amount){
    if (amount >0){
        balance += amount;
        cout<<endl<<amount<<" is deposited successfully.";
        cout<<endl<<"New Balance after deposit: "<<balance;
        return true;
    } else {
        cout<<endl<<"WARNING! "<<amount<<" entered is not correct.";
        return false;
    }
    
}
bool BankAccount::withdraw(int amount){
    if (amount <=0){
        cout<<endl<<"Entered value is incorrect, please enter a positive value";
        return false;
    } else if(amount <= balance){
        balance -= amount;
        cout<<endl<<amount<<" is successfully withdrawn.";
        cout<<endl<<"Remaining balance after withdraw: "<<balance;
        return true;
    } else {
        cout<<endl<<"Balance is insufficient for requested amount.";
        return false;
    }
}
/*void BankAccount::transfer(int amount, BankAccount& recipient){
    
}
*/
