#include <iostream>
using namespace std;

void swapvalue()
{
	//program for swapping value of two variables
	int a = 20;
	int b = 10;
	int age = 25;

	//1
	int temp = a; //make a temporary
	a = b;
	b = temp;

	//2
	a = a + b;//30
	b = a - b;//20
	a = a - b;//10

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


}
int main()
{
	swapvalue();


	return 0;
}