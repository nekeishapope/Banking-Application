#include<iostream>
#include<istream>
#include<iomanip>
#include<string>
#include"Payment.h"
#include"Person.h"
void Names() {
	cout << "1- Albert John" << endl;
	cout << "2- James Blue" << endl;
	cout << "3- Ahmed Ali" << endl;
	cout << "4- Robert Brown" << endl;
	cout << "5- All" << endl;
}

using namespace std;
int main() {
	Person person1("Albert John", 123456);
	Person person2("James Blue", 234569);
	Person person3("Ahmed Ali", 3765423);
	Person person4("Robert Brown", 564312);
	
	Payment p1cash(25.78, "CAD");
	Payment p2cash(125.98, "CAD");
	Payment p3Ccard(243.33, "CAD");
	Payment p4Ccard(90, "CAD");
	string dimensionalDisplay[5][8] = { "Person","Bills","Shopping","Grocery","Fuel","Medicine","Others" };
	string Type = "CAD";
	int choice = 1;
	Names();
	cin >> choice;
	if (choice == 1)
	{
		for (int i = 0; i < 3; i++) {

			for (int j = 0; j < 8; j++) {
				cout << dimensionalDisplay[i][j] << setw(18);
			}
			cout << "\n";
			dimensionalDisplay[1][0] = { person1.getName() };
			dimensionalDisplay[2][0] = to_string({ person1.getId() });
			for (int i = 0; i < 2; i++) {
				string str = to_string({ p1cash.getPayment() });
				str.erase(5,4);
				dimensionalDisplay[1][1] = str;

				dimensionalDisplay[2][1] = { p2cash.getTypeOfPayment() };
				str = to_string({ p2cash.getPayment() });
				str.erase(5, 4);
				dimensionalDisplay[1][3] = str;
			}
		}
			
	}
	if (choice == 2)
	{
		for (int i = 0; i < 3; i++) {

			for (int j = 0; j < 8; j++) {
				cout << dimensionalDisplay[i][j] << setw(18);
			}
			cout << "\n" << setprecision(2);
			dimensionalDisplay[1][0] = { person2.getName() };
			dimensionalDisplay[2][0] = to_string({ person1.getId() });
			for (int i = 0; i < 2; i++) {
				string str2 = to_string({ p3Ccard.getPayment() });
				str2.erase(5, 4);
				dimensionalDisplay[1][4] = str2;
				dimensionalDisplay[2][4] = { p2cash.getTypeOfPayment() };
				str2 = to_string({ p2cash.getPayment() });
				str2.erase(5, 4);
				dimensionalDisplay[1][6] = str2;
			}
		}
	}
	if (choice == 3)
	{
		for (int i = 0; i < 3; i++) {

			for (int j = 0; j < 8; j++) {
				cout << dimensionalDisplay[i][j] << setw(18);
			}
			cout << "\n";
			dimensionalDisplay[1][0] = { person3.getName() };
			dimensionalDisplay[2][0] = to_string({ person1.getId() });
			for (int i = 0; i < 2; i++) {
				string str3 = to_string({ p1cash.getPayment() });
				str3.erase(5, 4);
				dimensionalDisplay[1][6] = str3;
				dimensionalDisplay[2][6] = { p4Ccard.getTypeOfPayment() };
				str3 = to_string({ p4Ccard.getPayment() });
				str3.erase(5, 3);
				dimensionalDisplay[1][5] = str3;
			}
		}
	}
		if (choice == 4)
		{
			for (int i = 0; i < 3; i++) {

				for (int j = 0; j < 8; j++) {
					cout << dimensionalDisplay[i][j] << setw(18);
				}
				cout << "\n";
				dimensionalDisplay[1][0] = { person4.getName() };
				dimensionalDisplay[2][0] = to_string({ person1.getId() });
				for (int i = 0; i < 2; i++) {
					string str4 = to_string({ p4Ccard.getPayment() });
					str4.erase(5, 4);
					dimensionalDisplay[1][3] = str4;
					dimensionalDisplay[2][3] = { p3Ccard.getTypeOfPayment() };
					str4 = to_string({ p3Ccard.getPayment() });
					str4.erase(5, 4);
					dimensionalDisplay[1][6] = str4;
				}
			}
		}
	if (choice == 5)
	{
		for (int i = 0; i < 5; i++) {

			for (int j = 0; j < 8; j++) {
				cout << dimensionalDisplay[i][j] << setw(18);
			}
			cout << "\n";
			dimensionalDisplay[1][0] = { person1.getName() };
			dimensionalDisplay[2][0] = { person2.getName() };
			dimensionalDisplay[3][0] = { person3.getName() };
			dimensionalDisplay[4][0] = { person4.getName() };
			cout << setprecision(10);
			dimensionalDisplay[1][1] = to_string({ p1cash.getPayment() });
			dimensionalDisplay[1][3] = to_string({ p2cash.getPayment() });
			dimensionalDisplay[2][2] = to_string({ p1cash.getPayment() });
			dimensionalDisplay[2][4] = to_string({ p2cash.getPayment() });
			dimensionalDisplay[3][6] = to_string({ p1cash.getPayment() });
			dimensionalDisplay[3][5] = to_string({ p2cash.getPayment() });
			dimensionalDisplay[1][3] = to_string({ p1cash.getPayment() });
			dimensionalDisplay[1][6] = to_string({ p2cash.getPayment() });
		}
	}
}