#pragma once
#include <iostream>
#include"Account.h"
using namespace std;

class CheckingAccount : public Account {
public:

	CheckingAccount() {
		transactionFee = 0.0;
	}
	CheckingAccount(double initialBalance = 0.0, double feesAmount = 0.0)
		:Account(initialBalance)
	{
		if (feesAmount >= 0)
		{
			transactionFee = feesAmount;
		}
		else
		{
			throw invalid_argument("Transaction fees must be great than or equal to $0.0");
		}
	}

	void feesCharged()
	{
		Account::setBalance(getBalance() - transactionFee);
		//cout << transactionFee << endl;
		//cout << "Transaction fee that's been charged is: " << "$" << transactionFee << endl;
		//cout << "Balance after all transaction: " << getBalance() - transactionFee << endl;
	}

	void credit(double c_amount = 0.0)
	{
		Account::credit(c_amount);
		feesCharged();
	}

	bool debit(double d_amount = 0.0)
	{
		bool withdrawn = Account::debit(d_amount);
		if (withdrawn)
		{
			feesCharged();
			return true;
		}
		else {
			return false;
		}


	}
private:
	double transactionFee = 0.0;
};


