#include<iostream>
#include <string.h>
#include"Person.h"


using namespace std;


int main()
{
	int AN, i, type;
	int accOption = 0;
	string acctype, name;
	float inBalance = 0.0, cdLimit = 0.0;
	Person person1;
	Person* person = nullptr;
	Account *account[2];
	//Account* account[2];
	
	//person1.display();
	//char name[nameSize + 1];
	string personname;
	long id;
	
		cout << "Enter The Person's Name: ";
		getline(cin, personname);
		
		cout << "Enter the Person's ID Number: ";
		cin >> id;
		person = new Person(personname, id);

		cout << "Enter The Number of Account Person Hold: ";
		cin >> AN;
		//account = new Account[AN];
		
			person1.setName(personname);
			person1.setId(id);	
		for (i = 0; i < AN; i++) 
		{
		cout << "\nSelect Account Type: " << endl;
		cout << "1- Saving Account" << endl;
		cout << "2- Checking Account" << endl;
		cin >> type;
			while (!(type == 1 || type ==2)) {
				cout << "Invalid Selection. Select the Account Type or press 0 to have null Account." << endl;
				cout << "Select Account Type: " << endl;
				cout << "1- Saving Account" << endl;
				cout << "2- Checking Account" << endl;
				cin >> type;
			}
			if (type == 0) {
				account[0] = '\0';
				return 0;
			}
			if (type == 1) 
			{
				acctype = "Savings Account";
			}
			else if (type == 2) {
				acctype = "Credit Account";
			
			}
		
			
			
				if (type == 1) {
					cout << "Enter Initial Balance: ";
					cin >> inBalance;
					person[0].setBalance(inBalance);
					account[0] = new Account;
					account[0]->setaccountType(acctype);
					cout << "\nAccount Title: " << person->getName() << endl;
					cout << "Account " << i + 1 << ": " << account[0]->getaccountType()<< endl;
					cout << "Balance: " << person[0].getBalance() << endl;
				}
				if (type == 2) {
					account[1] = new Account[AN];
					acctype = "Credit Account";
					cout << "Enter Credit Limit: ";
					cin >> cdLimit;
					account[1]->setaccountType(acctype);

					person[1].setBalance(cdLimit);
					//person[i].createAccount(account);
				}
			
		}
		
	cout << "\nAccount Title: " << person1.getName() << endl;
	cout << "Account 1" << ": " << account[0]->getaccountType() << endl;
	cout << "Balance: " << person[0].getBalance() << endl;
		cout << "Account 2" << ": " << account[1]->getaccountType() << endl;
		cout << "Balance: " << person[1].getBalance() << endl;
	
	

		
}
