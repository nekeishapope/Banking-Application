#include<iostream>
#include<vector>
#include<iomanip>
#include"Account.h"
#include"SavingsAccount.h"
#include"CheckingAccount.h"

using namespace std;

int main()
{

	SavingsAccount savingsAcc(70.00, 0.2);
	CheckingAccount checkingAcc(20.00, 0.1);
	Account accounts(50.0);

	cout << "Savings Account balance: $ "
		<< savingsAcc.getBalance() << endl;

	cout << "Checkings Account balance: $ "
		<< checkingAcc.getBalance() << endl;

	cout << "Select Account Type:" << endl;
	cout << "1. Saving Account" << endl;
	cout << "2. Checking Account" << endl;
	int account_actions;
	cin >> account_actions;
	int action;
	double withdrawal = 0.0;
	if (account_actions == 1) {

		cout << "Hello! What would you like to do today?" << endl;
		cout << "Enter 1 for withdraw 2 for deposit: ";

		cin >> action;
		if (action == 1)
		{
			cout << "Enter amount to withdraw: ";
			cin >> withdrawal;
			double balance_after_withdrawl = checkingAcc.getBalance() - withdrawal;
			cout << "Balance in the Account after withdrawl: ";

			cout << balance_after_withdrawl - checkingAcc.debit(withdrawal);
		}
		else {
			double deposit = 0.0;
			cout << "Enter the amount to deposit: ";
			cin >> deposit;
			checkingAcc.credit(deposit);
			cout << "Balance after deposit: " << checkingAcc.getBalance() << endl;
		}
	}
	else
	{
		if (account_actions == 2) {

			cout << "What would you like to do today?" << endl;
			cout << "Enter 1 for withdraw 2 for deposit: ";
			cin >> action;
			if (action == 1) {
				cout << "Enter amount to withdraw: ";
				cin >> withdrawal;
				savingsAcc.debit(withdrawal);
				cout << "Current Balance in Account Savings: " << savingsAcc.getBalance() << endl;

			}
			else if (action == 2) {
				double deposit = 0.0;
				cout << "Enter the amount to deposit: ";
				cin >> deposit;
				savingsAcc.credit(deposit);
				if (deposit >= 0)
				{
					double interest = savingsAcc.calculateInterest();
					cout << interest << " Has been added to your savings account " << endl;
					savingsAcc.credit(interest);
				}
				cout << "Current Balance in Account Savings: " << savingsAcc.getBalance() << endl;
			}
		}
	}





	return 0;
}
