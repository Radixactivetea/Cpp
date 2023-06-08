#include <iostream>
#include <string>
using namespace std;

void function();//declare if want to place below main
int guest(string guest);

void introduce(string name, string city, int age = 20) //make 20 as age default //default must start from left first
{
	cout << "My name is " << name << endl;
	cout << "I'm from " << city << endl;
	cout << "My age is " << age << " years old" << endl;
}

bool isPrimeNumber(int number)
{
	bool isPrimeFlag = true;//dont need this (return false)
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			isPrimeFlag = false;
			break;
			//or
			/*return false;*/
		}
	}
	return isPrimeFlag; 
	//or
	/*return true;*/ //already return false
}

int funcOverLoad(int a, int b)
{
	int result = a + b;
	return result;
}

double funcOverLoad(double a, double b)
{
	return a + b;
}

float funcOverLoad(float a, float b, float c)
{
	return a + b + c;
}

int recursion(int n, int m)//[2,5]
{
	if (n == m)//base case to stop the loop
		return n;
	return n + recursion(n + 1, m);//2+3+4+5
}

template<typename T>
void genericTemplate(T& a, T& b)//generic use for same code for diff data types
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	function();
	
	/*introduce("John","Cali", 25);
	cout << endl;
	introduce("Dick", "New York");*/

	/*int number;
	cout << "number :";
	cin >> number;
	bool isPrimeFlag = isPrimeNumber(number);
	if (isPrimeFlag)
	{
		cout << "Prime Number " << endl;
	}
	else
	{
		cout << "Not Prime Number " << endl;
	}*/

	/*int a = 0;
	for (int i = 2; i < 100; i++)
	{
		bool isPrime = isPrimeNumber(i);
		if (isPrime)
		{
			cout << i << "is Prime Number" << endl;
			a += 1;

		}
	}
	cout << "total Prime Number is ";
	cout << a;*/

	//cout << guest("hello"); 
	//// in function return so must use cout

	/*cout << funcOverLoad(4.3,3.0) << endl;
	cout << funcOverLoad(4.4, 3.3) << endl;
	cout << funcOverLoad(4.4, 3.3, 2.2) << endl;*/

	/*int n, m;
	cin >> n;
	cin >> m;

	cout << "sum " << recursion(n, m);*/

	int a = 10, b = 20;
	cout << a << " - " << b << endl;
	genericTemplate(a, b);
	cout << a << " - " << b << endl;

	string c = "Hello", d = "World";
	cout << c << " - " << d << endl;
	genericTemplate(c, d);
	cout << c << " - " << d << endl;

	system("pause>0");
}

void function()
{
	cout << "Hello from Function()" << endl;
}

int guest(string guest)
{
	if (guest.size() == 5)
	{
		return 1;
	}
	else
		return 0;
}