//checking_account.h//checking_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount : public BankAccount
{
public:
   CheckingAccount(){}//default constructor
   CheckingAccount(int b) : BankAccount(b){}
};

#endif