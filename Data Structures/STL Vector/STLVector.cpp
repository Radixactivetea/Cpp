#include <iostream>
#include <vector>
#include <string>
using namespace std;

void itConstant(vector<int> num)
{
	for (auto it = num.cbegin(); it != num.cend(); it++) //c meant constant
	{
		//
		// *it = 20;
		cout << *it << endl;
	}
}

void itPrint(vector<int> num)
{
	for (auto it = num.begin(); it != num.end(); it++)
	{
		//cout << it << endl;
		cout << *it << endl;
		cout << &it << endl;
		cout << &(*it) << endl;
	}
}

void vectorFunction(vector<int> numbers)
{
	//Important functionalities
	cout << "Size: " << numbers.size() << endl;
	cout << "Max size: " << numbers.max_size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;
	numbers.resize(5);
	cout << "Size after resizing: " << numbers.size() << endl;
	if (numbers.empty())
		cout << "Vector is empty" << endl;
	else
		cout << "Vector is not empty" << endl;
	cout << "Element[0] is: " << numbers[0] << endl;
	cout << "Element at(0) is: " << numbers.at(0) << endl;
	cout << "Front: " << numbers.front() << endl;
	cout << "Back: " << numbers.back() << endl;



	//insert element at specific position in vector
	numbers.insert(numbers.begin() + 2, 88);
	//erase element from a specific position
	numbers.erase(numbers.begin() + 2);
	//remove last element of vector
	numbers.pop_back();



	//clear all the elements of vector
	numbers.clear();
	cout << "Size after clear: " << numbers.size() << endl;
}

int main()
{
	//provides all benefits of the dynamic array
	// stored in contiguous memory
	// can resize

	vector<int> num;
	int n;
	cin >> n;
	//num.push_back(0);
	for (int i = 1; i <= n; i++)
	{

		num.push_back(i);
	}

	//basic way to print
	for (int numbers : num)
	{
		cout << numbers << endl;
	}


	return 0;
}