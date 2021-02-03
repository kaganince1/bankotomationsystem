#include "IndividualCustomer.h"



IndividualCustomer::IndividualCustomer(string _name, string _address, string _email, int _age, string _title) :Customer(_name, _address, _email)
{
	age = _age;
	title = _title;
}

IndividualCustomer & IndividualCustomer::setAge(int _age)
{
	age = _age;
	return *this;
}

int IndividualCustomer::getAge()
{
	return age;
}

IndividualCustomer & IndividualCustomer::setTitle(string _title)
{
	title = _title;
	return *this;
}

string IndividualCustomer::getTitle()
{
	return title;
}

void IndividualCustomer::print()
{
	cout << "Name : " << getName() << endl << "Address : " << getAddress() << endl << "E-mail : " << getEmail() << endl;
	cout << "Age : " << age << endl << "Title : " << title << endl;
}

string IndividualCustomer::getCustomerType()
{
	return "Individual Customer";
}


IndividualCustomer::~IndividualCustomer()
{
}
