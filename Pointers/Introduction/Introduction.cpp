#include <iostream>
#include <memory>
using namespace std;

void intro()
{
	//pointer store address 
	//pointer must same variable types
	int n = 5;
	cout << &n << endl;		// ampersand(&) that should give the address of n

	int* ptr = &n;          // make a pointer to store the address of n
	cout << ptr << endl;
	cout << *ptr << endl;

	*ptr = 10;				// value of that address change to 10 //dereferen ced
	cout << ptr << endl;	// the address not change 
	cout << *ptr << endl;   // value = 10
	cout << n << endl;		// ouputs : 10
}
void example(int* num)
{
	*num = 10;
}
void voidpointer(void* ptr, char type)
{
	switch (type) //be care full at (int*)ptr because compile not detect the error
	{
	case 'i': //handle int*
		cout << *((int*)ptr) << endl;  //(int*)ptr is pointer casting
		break;
	case'c'://handle char*
		cout << *((char*)ptr) << endl;
		break;
	}
}
void pointerAndArray()
{
	int luckyNumbers[5] = { 2,3,5,6,9 };
				//index :   0 1 2 3 4
	cout << luckyNumbers<< endl;				// the address of first element in array
	cout << &luckyNumbers[0] << endl;			// the address of first element in array
	cout << luckyNumbers[2] << endl;			// the value in that index
	cout << *(luckyNumbers + 2) << endl;		// the value in that index

	int justNumber[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Number: ";
		cin >> justNumber[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << *(justNumber + i) << " ";
	}
}
void returnFunction(int num[], int size, int* min, int* max)
{
	for (int i = 1; i < size; i++)
	{
		if (num[i] < *min)
			*min = num[i];
		if (num[i] > *max)
			*max = num[i];
	}
	cout << "min: " << *min << endl;
	cout << "max: " << *max << endl;
}
void dynamicArray()
{
	//at first size of array must had to be known at compile time
	//dynamic arrays : new and delete
	int size;
	cout << "size: ";
	cin >> size;
	//int myarray[size]; //array must known at compile time
	int* myArray = new int[size]; //int[size] this is array
	for (int i = 0; i < size; i++)
	{
		cout << "Number: ";
		cin >> *(myArray + i);
	}
	for (int i = 0; i < size; i++)
	{
		cout << myArray[i] << " ";
	}
	//must delete, it may cause
	delete[]myArray;
	myArray = NULL;
}
int getNumber()
{
	return 5;
}
int add(int a, int b)
{
	return a + b;
}
int main()
{ 
	/*intro();*/

	/*int number = 5;
	int* numPtr = &number;
	cout << number;
	example(numPtr);
	cout << number;*/ //if use function without pointer, outputs should be 5

	/*int num = 5;
	char letter = 'a';
	voidpointer(&num, 'i');
	voidpointer(&letter, 'c');*/

	/*pointerAndArray();*/

	
	/*
	* //getmin and max num
	int num[5] = { 5,4,-2,29,6 };
	returnFunction(num, 5, &num[0], &num[4]);
	*/
	
	/*dynamicArray();*/

	/*
	//function pointer
	cout << getNumber() << endl;	//we get the value as usual
	cout << getNumber << endl;		//we the address of that function
	int(*funcPtr)() = getNumber; //creating a function pointer
	cout << funcPtr() << endl;

	int(*funcPtr2)(int, int) = add;
	cout << add(2, 3) << endl;
	cout << funcPtr2(2, 4) << endl;*/




	system("pause>0");
	return 0;
} 