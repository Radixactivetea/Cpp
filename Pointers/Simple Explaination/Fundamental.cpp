#include <iostream>
using namespace std;

void pointers(int num)
{
    //pointers is basically just a type of information that can represent
    //basically memory address
    
    cout << &num << endl;     //the address of the value 10  //outputs : 00000060602FF7F4

    int* pNum = &num;
    cout << pNum << endl;     //store the memory address in variable   //outputs : 00000060602FF7F4
    cout << *pNum << endl;    //dereference a pointer                  //outputs : 10
}

int main()
{
    int num = 10;
    pointers(num);


	return 0;
}