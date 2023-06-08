////Relationship between Virtual Finctions, Pure Virtual Functions and Absract Classes OOP
//#include <iostream>
//using namespace std;
//
//class instrument
//{
//public:
//	virtual void makeSound() = 0;
//};
//
//class accordion : public instrument
//{
//public:
//	void makeSound()
//	{
//		cout << "Accordion is playing...\n";
//	}
//};
//
//class piano : public instrument
//{
//public:
//	void makeSound()
//	{
//		cout << "Piano is playing...\n";
//	}
//};
//
//int main()
//{
//	instrument* i1 = new accordion();
//	//i1->makeSound();
//
//	instrument* i2 = new piano();
//	//i2->makeSound();
//
//	instrument* Instruments[2] = { i1,i2 };
//	for (int i = 0; i < 2; i++)
//		Instruments[i]->makeSound();
//
//	system("pause>0");
//}