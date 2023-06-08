#include <iostream>
using namespace std;

class Node
{
public:
	int value;
	Node* next;
	Node* previous;
};

void printForward(Node* head) 
{
	Node* traverser = head;
	while (traverser != nullptr) 
	{
		cout << traverser->value << endl;
		traverser = traverser->next;
	}
}

void printBackward(Node* tail) 
{
	Node* traverser = tail;
	while (traverser != nullptr) 
	{
		cout << traverser->value << endl;
		traverser = traverser->previous;
	}
}

int main()
{
	// it has two pointers (next and previous)
	// NULL <- n1 -> <-n2 -> NULL
	// can be traversed in two directions
	// can add new node in four place (begining, last, before and after a node)
	// they take more space
	// need to take care of both pointer

	// first node
	//1. create a new node
	//2. node->value = 4
	//3. node->next = nullptr
	//	 node->previous = nullptr
	//4. head = node
	//	 tail = node
	Node* head;
	Node* tail;
	Node* node = new Node();
	node->value = 1;
	node->next = nullptr;
	node->previous = nullptr;
	head = node;
	tail = node;

	//2nd node
	//1. create a new node
	//2. node->value = 5
	//3. node->next = nullptr
	//	 node->previous = tail
	//4. tail->next = node
	//5. tail = node 
	node = new Node();
	node->value = 5;
	node->next = nullptr;
	node->previous = tail;
	tail->next = node;
	tail = node;

	//3rd node
	//1. create a new node
	//2. node->value = 5
	//3. node->next = nullptr
	//	 node->previous = tail
	//4. tail->next = node
	//5. tail = node 
	node = new Node();
	node->value = 6;
	node->next = nullptr;
	node->previous = tail;
	tail->next = node;
	tail = node;

	//4rd node
	//1. create a new node
	//2. node->value = 5
	//3. node->next = nullptr
	//	 node->previous = tail
	//4. tail->next = node
	//5. tail = node 
	node = new Node();
	node->value = 7;
	node->next = nullptr;
	node->previous = tail;
	tail->next = node;
	tail = node;

	printForward(head);
	cout << "--------" << endl;
	printBackward(tail);

	system("pause>0");
}