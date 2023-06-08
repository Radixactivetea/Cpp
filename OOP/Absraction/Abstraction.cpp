#include <iostream>
using namespace std;
//hide the complex detail functionality
class SmartPhone
{
public:
	virtual void TakeASelfie() = 0;
	virtual void MakeACall() = 0;
};

class Andriod :public SmartPhone
{
public:
	void TakeASelfie()
	{
		cout << "Andriod Selfie\n";
	}
	void MakeACall()
	{
		cout << "Andriod Calling\n";
	}

};

class Iphone :public SmartPhone
{
public:
	void TakeASelfie()
	{
		cout << "Iphone Selfie\n";
	}
	void MakeACall()
	{
		cout << "Iphone Calling\n";
	}
};

int main()
{
	SmartPhone* s1 = new Andriod();
	s1->TakeASelfie();
	s1->MakeACall();


	system("pause>0");
}