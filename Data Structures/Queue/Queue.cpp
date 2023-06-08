#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> queue)
{
	while (!queue.empty())
	{
		cout << queue.front() << " ";
		queue.pop();
	}
	cout << endl;
}

int main()
{
	//FIFO (first in first out)
	//first come first serve 
	//queue to make faster (idk) (printer)
	//online order, ticket
	//function (push, pop, size, front, back, empty)

	queue<int> myQueue;
	myQueue.push(1);
	myQueue.push(2);
	myQueue.push(3);

	cout << "Size is " << myQueue.size() << endl;
	cout << "First element is " << myQueue.front() << endl;
	cout << "Last element is " << myQueue.back() << endl;

	cout << "My Queue:" << endl;
	printQueue(myQueue);


	return 0;
}

