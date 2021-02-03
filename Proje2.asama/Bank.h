#pragma once
#ifndef BANK_H
#define BANK_H
#include "Account.h"
#include "Customer.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
class Bank
{
private:
	string BankName;
	string BankID;
	list<Account*> accounts;
	vector<Customer*> customers;
public:
	Bank(string = "", string = "");
	Bank &setName(string);
	string getName();
	Bank &setID(string);
	string getID();
	bool createAccount(string, string);
	bool addCustomer(Customer*);
	void listAccounts();
	void listCustomers();
	bool removeAccount(double);
	bool addNewAccount(Account*);
	~Bank();
};
#endif
