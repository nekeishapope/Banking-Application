#include<iostream>
#include "Account.h"
#include<string.h>
#include"Person.h"
using namespace std;

Account::Account(double balance)
{
	if (balance >= 0.0)
	{
		m_balance = balance;
	}
	else {
		balance = 0.0;
		throw invalid_argument("The Initial Balance is invalid");
	}
}
Account::Account(string _name, double _bal) {

	accountType = _name;
	m_balance = _bal;
}

void Account::credit(double amount)
{
	string currency = "CAD";
	m_balance = m_balance + amount;

}

bool Account::debit(double withdraw)
{
	string currency = "CAD";
	if (withdraw > m_balance)
	{
		throw invalid_argument("Debit amount exceeded account balance");
		return false;
	}
	else {
		m_balance = m_balance - withdraw;
		return true;
	}
	
}

void Account::setBalance(double currentBalance)
{
	m_balance = currentBalance;
}

double Account::getBalance()
{
	return m_balance;
}
void Account::setaccountType(string acctype) {
	

	int type = 0;
	if (type == 1) {
		acctype = "Savings Account";
	}
	else if (type == 2) {
		acctype = "Credit Account";
	}
	accountType = acctype;
}
string Account::getaccountType() {
	return accountType;
}