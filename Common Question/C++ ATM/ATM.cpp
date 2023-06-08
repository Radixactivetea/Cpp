#include <iostream>
using namespace std;

double balance()
{
	double baki = 50.00;
	return baki;
}

double deposit(double deposit)
{
	double total = balance() + deposit;
	return total;
}

double withdraw(double m)
{
	double total = balance() - m;
	return total;
}

void menu()
{
	int ch = 1;
	do
	{
		cout << "***** MENU ******" << endl;
		cout << "1. Check Balance" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Wihtdraw" << endl;
		cout << "4. EXIT" << endl;
		cin >> ch;
		system("cls");
		switch (ch)
		{
		case 1:
			cout << "Balance Amount : " << "RM " << balance();
			break;
		case 2:
			double n;
			cout << "Deposit Amount: ";
			cin >> n;
			cout << "Balance : " << "RM " << deposit(n);
			break;
		case 3:
			double m,b;
			cout << "Withdraw Amount: ";
			cin >> m;
			b = withdraw(m);
			if (b < 0)
				cout << "Not Enough Money ";
			else
				cout << "Balance : " << "RM " << b ;
			break;
		case 4:
			cout << "BIG Thanks You...";
			break;
		default:
			cout << "\n[1/2/3/4] Only!\n";
			break;
		}
		cout << endl;
		system("pause>0");
		system("cls");

	} while (ch != 4);
}

int main()
{
	int pin, count = 0;
	do
	{
		cout << "1 2 3\n";
		cout << "4 5 6\n";
		cout << "7 8 9\n";
		cout << "PIN -> ";
		cin >> pin;
		system("cls");
		if (pin == 1234)
			menu();
		else
			count++;
	} while ( count != 4 && pin !=1234 );

	if (count == 4)
		cout << "Too Many Unsuccessful Attempts\n";

	return 0;
}