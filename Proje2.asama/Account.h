#ifndef Account_h
#define Account_h
class Customer;
#include "Customer.h"
#include <iostream>
#include<string>

using namespace std;
class Account
{
private:
	long accountNumber;
	double balance;
	Customer* owner;
public:
	Account(double = 0.0, long = 0, Customer* = NULL);
	Account &setBalance(double);
	double getBalance();
	Account &setAccountNumber(long);
	long getAccountNumber();
	virtual void credit(double);
	virtual bool debit(double);
	virtual string getAccountType() = 0;
	virtual void print();
	virtual void endOfDay() = 0;
	bool setAccountOwner(Customer*);
	virtual ~Account();
};
#endif
