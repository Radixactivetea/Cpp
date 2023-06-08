#include <iostream>
#include <string>
using namespace std;
 //Abstraction : to hide the complexity
class AbstractionEmployee
{
	virtual void AskForPromotion() = 0;
};
class Employee : AbstractionEmployee //class private by default
{
	//private : only can access in class
	//public : global
	//protected : between private and public
private: //encapsulation : to make private ithink..
	string Company;
	int Age;
protected:
	string Name;
public:
	string getName()
	{
		return Name;
	}
	string getCompany()
	{
		return Company;
	}
	int getAge()
	{
		return Age;
	}
	//constructor : dont have return type/ same name as class(Employee)/ must be public
	Employee(string name, string company, int age)
	{
		Name = name;
		Company = company;
		Age = age;
	}
	//class method or a function
	void intro()
	{
		cout << "My name is " << Name << ". I work for " << Company << " and I'm " << Age << " year old" << endl;
	}
	void AskForPromotion()
	{
		if (Age > 20)
			cout << Name << " got promoted!\n";
		else
			cout << Name << " sorry no promotion!\n";
	}
	//polymporphism : base and dirived class have same function or method 
	//the most common use of polymorphism is when a parent class reference is used to refer to a child class object
	virtual void work()
	{
		cout << Name << " is checking email and do some shit\n";
	}
};
class Developer :public Employee //inharetance : be more specific
{// there is no default constructor because already made it(in Employee).
public:
	string FavProg;
	Developer(string name, string company, int age, string favprog) :Employee(name, company, age)
	{
		FavProg = favprog;
	}
	void FixBug()
	{
		cout << Name << " fixed bug using " << FavProg << endl;
	}
	void work()
	{
		cout << Name << " is doing a project and do some shit\n";
	}
};
class Teacher :public Employee
{
	string Subject;
public:
	Teacher(string name, string company, int age, string subject) :Employee(name, company, age)
	{
		Subject = subject;
	}
	void Preparelesson()
	{
		cout << Name << " is preparing " << Subject << " lesson" << endl;
	}
	void work()
	{
		cout << Name << " is teaching and do some shit\n";
	}
};
int main()
{
	Employee employee1("Sirajuddin", "The Juicer", 20);
	Developer employee2("Marty", "Gulag Gang", 25, "C++");
	Teacher employee3("Jean", "RP University", 25, "Programming");

	//employee1.intro();
	//employee1.AskForPromotion();
	//employee1.work();

	//employee2.FixBug();
	//employee2.AskForPromotion();
	//employee2.work();

	//employee3.intro();
	//employee3.Preparelesson();
	//employee3.work();

	Employee* e1 = &employee2;
	Employee* e2 = &employee1;
	Employee* e3 = &employee3;
	e1->work();
	e3->work();

	system("pause>0");
}
