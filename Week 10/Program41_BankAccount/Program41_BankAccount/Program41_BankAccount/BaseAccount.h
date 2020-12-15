#include <iostream>
#include <string>
using namespace std;
#ifndef BASEACCOUNT_H
#define BASEACCOUNT_H

class BaseAccount
{
public:
	BaseAccount();
	~BaseAccount();

protected:
	int accountNumber;
	string surname;
	string forename;
	string address;
	double balance;
	int interestRate;
	enum accountType { general, junior, savings };

private:


};

#endif

