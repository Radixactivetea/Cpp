#include <iostream>
using namespace std;

void basicway()
{
	//imagine making this 100 month
	float month1 = 100;
	float month2 = 220;
	float month3 = 300;
	float month4 = 0;
	float month5 = 200;
	float month6 = 250;

	float total = month1 + month2 + month3 + month4 + month5 + month6;
	float average = total / 6;
	float inTwoYears = average * 24;

	cout << "total = " << total << endl;
	cout << "average = " << average << endl;
	cout << "inTwoYears = " << inTwoYears << endl;
}
void arrayway()
{
	float total = 0;
	float month[6]; // = { 100,220,300,0,200,250 };
	// month[0] = 100;
	// month[1] = 220;
	// month[2] = 300;
	// month[3] = 0;
	// month[4] = 200;
	// month[5] = 250;
	// use loop make it easier
	for (int i = 0; i <= 5; i++)
	{
		cout << "month " << i + 1 << endl;
		cin>> month[i];
	}
	// to access  the array, use the index
	// index = 0   1   2  3   4  5
	// to know size of arrays 'sizeof(month)/sizeof(float)'
	for (int i = 0; i < sizeof(month) / sizeof(float); i++)
	{
		total += month[i];
	}
	float average = total / (sizeof(month) / sizeof(float));
	float inTwoYears = average * 24;
	cout << "Total = " << total << endl;
	cout << "Average = " << average << endl;
	cout << "In Two Years = " << inTwoYears << endl;
}

int main()
{
	//total, average, inTwoYears
	//array is faster when u want to find the data
	//array is hard to adjust size (to ad more data)
	arrayway();



	system("pause>0");
}