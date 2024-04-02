/* This is main.cpp file too explains the Struct and Class.
 * - It first defines Struct in this file and then show how to 
 * create its objects and manipulate them.
 * - Later, class example is explained by implementing header file (.h)
 * and implementation file (.cpp) and then show how to create its object
 * in this main.cpp file. 
 * - Header file of the created class must be included in the main.cpp file
 * 
 * 
 * NOTE: You can compile this code by writing following commands in terminal
 *      g++ main.cpp BankAccount.cpp -o otfile 
 *      ./otfile
 */
#include <iostream>
#include "BankAccount.h"
using namespace std;


int main() {

    /* -------- CLASS Example */
    cout<<endl<<endl<<"-----Lets work on BankAccount class and its objects-----";
    // Create an object of the class BankAccount
    BankAccount acc; // It will call the constructor of the class
    cout<<endl<<"Account Holder Name:"<<acc.getName(); // will be empty as name is not initialized yet
    acc.setName("Gokalp"); // Initializing/Setting the name 
    cout<<endl<<"Account Holder Name:"<<acc.getName(); // It will return Gokalp
    cout<<endl<<"Balance: "<<acc.getBalance(); // It will be zero, as we have set it to ZERO in the constructor
    
    // Try depositing a negative amount to an account
    acc.deposit(-400); // Deposit function will not allow to deposit this amount as it run the else part due to negative value
    // Now try depositing a positive value 
    acc.deposit(200);
    
    // Try withdrawing a negative amount to an account
    acc.withdraw(-500); // Withdraw function will not allow to withdraw this amount as it run the else part due to negative value
    // Now try withdrawing a positive value but more than value of balance
    acc.withdraw(450); // Withdraw function will run the last else part as amount entered is more than the balance.
    // Now try withdrawing a positive amount which is less than the current balance
    acc.withdraw(75); // Amount will be withdrawn successfully.

    
    return 0;
}

