#include <iostream>
#include <memory>
using namespace std;

class myClass
{
public:
	myClass()
	{
		cout << "Constructor Invoked" << endl;
	}
	~myClass()
	{
		cout << "Destructor Invoked" << endl;
	}
};

void smartpointer();
void uniquepointer();
void sharepointer();
void weakpointer();

int main()
{
	system("pause>0");
}

void smartpointer()
{
	//a container
	//dont have worries about memory leaks
	//must include <memory>

	//unique pointer
	unique_ptr<int>unPtr1 = make_unique<int>(25);
	cout << "Ptr1 :" << endl;
	cout << unPtr1 << endl;						  //the address
	cout << *unPtr1 << endl;				      //the value

//  unique_ptr<int>unPtr2 = unPtr1;				  //unique pointer cannot be share
	unique_ptr<int>unPtr2 = move(unPtr1);		  //use move();
	cout << "Ptr1 :" << endl;
	cout << unPtr2 << endl;						  //same address with Ptr1
	cout << *unPtr2 << endl;					  //same value with Ptr1
	//cout << unPtr1 << endl;					  //no more address because move to Ptr2
	//cout << *unPtr1 << endl;					  //no more value because move to Ptr2
}
void uniquepointer()
{
	//cannot share
	{	//constructor invoked
		unique_ptr<myClass>unPtr1 = make_unique<myClass>();
	}	//destructor invoked
}
void sharepointer()
{
	{
		shared_ptr<myClass>shPtr1 = make_shared<myClass>();
		cout << "shared count: " << shPtr1.use_count() << endl;			//to find how many user (share)

		{
			shared_ptr<myClass>shPtr3 = shPtr1;
			cout << "shared count: " << shPtr1.use_count() << endl;
		}
		cout << "shared count: " << shPtr1.use_count() << endl;
	}
}
void weakpointer()
{
	weak_ptr<int>wePtr1;
	{
		shared_ptr<int>shPtr1 = make_shared<int>(25);
		wePtr1 = shPtr1;
	}
}