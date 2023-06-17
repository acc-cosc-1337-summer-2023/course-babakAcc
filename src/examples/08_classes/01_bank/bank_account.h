//bank_account.h

#include<iostream>

class BankAccount 
{

public:
    BankAccount(){std::cout <<"Using default constructor\n";} // default constructor
    BankAccount(int b) :balance(b) {std::cout<<"Using parameterized constructor\n";} //class constructor
    int get_balance() {return balance;}
    void deposit(int amount);
    void withdraw(int amount);

private:
    int balance{0}; //explicitly initiated to 0

};

