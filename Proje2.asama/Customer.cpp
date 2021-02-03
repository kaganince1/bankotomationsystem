#include "Customer.h"
#include <stdio.h>


Customer::Customer(string _name, string _address, string _email)
{
	name = _name;
	address = _address;
	email = _email;
}

Customer & Customer::setName(string _name)
{
	name = _name;
	return *this;
}

Customer & Customer::setAddress(string _address)
{
	address = _address;
	return *this;
}

Customer & Customer::setEmail(string _email)
{
	email = _email;
	return *this;
}

string Customer::getName()
{
	return name;
}

string Customer::getAddress()
{
	return address;
}

string Customer::getEmail()
{
	return email;
}

Account* Customer::getAccount(long number)
{
	for (int i = 0; i < accounts.size(); i++)
	{
		if (accounts[i]->getAccountNumber() == number)
			return accounts[i];
	}
	return NULL;
}

bool Customer::addNewAccount(Account* account)
{
	if (accounts.size()<accounts.max_size() && account != NULL)
	{
		accounts.push_back(account);
		return true;
	}
	return false;
}

Customer::~Customer()
{
}

