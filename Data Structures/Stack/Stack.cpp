#include <iostream>
#include <stack>
using namespace std;

void prinStackElements(stack<int> stack)
{
	//it will read the last one first (top)
	while (!stack.empty())
	{
		cout << stack.top() << endl;
		stack.pop();
	}
}

int main()
{
	//LIFO (last in first out)
	//FILO (first in last out)
	//last came first serve

	//functions (empty, size, top, push, pop)

	stack<int>numberStack;
	numberStack.push(1);
	numberStack.push(3);
	numberStack.push(5);
	numberStack.pop();  //lifo

	if (numberStack.empty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack is not empty" << endl;

	cout << "Stack size is " << numberStack.size() << endl;

	cout << "The elements of the stack is: " << endl;
	prinStackElements(numberStack);



	system("pause>0");
}