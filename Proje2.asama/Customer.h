class Account;
#ifndef Customer_h
#define Customer_h
#include "Account.h"
#include<vector>
#include <iostream>
#include<string>
#include <iterator>
#include <list>
using namespace std;
class Customer
{
private:
	string name;
	string address;
	string email;
	vector <Account*> accounts;
public:
	Customer(string = "", string = "", string = "");
	Customer &setName(string);
	Customer &setAddress(string);
	Customer &setEmail(string);
	string getName();
	string getAddress();
	string getEmail();
	virtual void print() = 0;
	Account* getAccount(long);
	virtual string getCustomerType() = 0;
	bool addNewAccount(Account*);
	virtual ~Customer();
};
#endif


