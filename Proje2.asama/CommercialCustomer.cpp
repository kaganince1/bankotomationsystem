#include "CommercialCustomer.h"



CommercialCustomer::CommercialCustomer(string _name, string _address, string _email, string _businessName) :Customer(_name, _address, _email)
{
	businessName = _businessName;
}

CommercialCustomer & CommercialCustomer::setBusinessName(string _businessName)
{
	businessName = _businessName;
	return *this;
}

string CommercialCustomer::getBusinessName()
{
	return businessName;
}

void CommercialCustomer::print()
{
	cout << "Name : " << getName() << endl << "Address : " << getAddress() << endl << "E-mail : " << getEmail() << endl;
	cout << "Business name : " << businessName << endl;
}

string CommercialCustomer::getCustomerType()
{
	return "Commercial Customer";
}


CommercialCustomer::~CommercialCustomer()
{
}
