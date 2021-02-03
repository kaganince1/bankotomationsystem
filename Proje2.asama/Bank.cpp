#include "Bank.h"


Bank::Bank(string name, string ID)
{
	BankName = name;
	BankID = ID;
}

Bank & Bank::setName(string name)
{
	BankName = name;
	return *this;
}

string Bank::getName()
{
	return BankName;
}

Bank & Bank::setID(string ID)
{
	BankID = ID;
	return *this;
}

string Bank::getID()
{
	return BankID;
}

bool Bank::createAccount(string customerName, string accountType)
{
	vector<Customer*>::iterator iter;

	for (iter = customers.begin(); iter != customers.end(); iter++)
	{
		if ((*iter)->getName() == customerName)
		{
			if (accountType == "SavingsAccount")
			{
				addNewAccount(new SavingsAccount(*iter));
				return true;
			}
			else if (accountType == "CheckingAccount")
			{
				addNewAccount(new CheckingAccount(*iter));
				return true;
			}
			else
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

bool Bank::addCustomer(Customer *customer)
{
	if (customers.size()<customers.max_size() && customer != NULL)
	{
		customers.push_back(customer);
		return true;
	}
	return false;
}

void Bank::listAccounts()
{
	list<Account*>::iterator iter;
	for (iter = accounts.begin(); iter != accounts.end(); iter++)
	{
		(*iter)->print();
		cout << "-------------------" << endl;
	}
}

void Bank::listCustomers()
{
	vector<Customer*>::iterator iter;
	for (iter = customers.begin(); iter != customers.end(); iter++)
	{
		(*iter)->print();
		cout << "-------------------" << endl;
	}
}

bool Bank::removeAccount(double accountNumber)
{
	list<Account*>::iterator iter;
	for (iter = accounts.begin(); iter != accounts.end(); iter++)
	{
		if ((*iter)->getAccountNumber() == accountNumber)
		{
			accounts.erase(iter);
			return true;
		}
	}
	return false;
}

bool Bank::addNewAccount(Account* account)
{
	if (accounts.size()<accounts.max_size() && account != NULL)
	{
		accounts.push_back(account);
		return true;
	}

	return false;
}


Bank::~Bank()
{
}
