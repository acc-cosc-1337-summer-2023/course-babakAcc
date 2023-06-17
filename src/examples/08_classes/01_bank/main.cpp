
#include "bank_account.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{
	BankAccount account;
	auto amount = 0;

	BankAccount account2(100);
	cout<<"\nBalance: :"<<account2.get_balance()<<"\n";

	cout<<"\nEnter an amount: ";
	cin>>amount;

	cout<<"\nDeposit: ";
	account.deposit(amount);

	cout<<"\nBalance: "<<account.get_balance()<<"\n";

	return 0;
}