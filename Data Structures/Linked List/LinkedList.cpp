#include <iostream>
using namespace std;

class Node //use class
{
public:
	int value;
	Node* next;
};
void print(Node* n )
{
	//use loop to access the list
	//start with head
	while (n!=NULL)
	{
		cout << n->value << endl;
		n = n->next;
	}
}
void insertFirst(Node** head, int newValue)
{
	//1. Prepare a newNode
	Node* newnode = new Node();
	newnode->value = newValue;
	//2. Put it in front of current head
	newnode->next = *head;
	//3. Move head of the list to point to the newNode
	*head = newnode;
}
void insertLast(Node** head, int newValue)
{
	//1. Prepare n newnode
	Node* newnode = new Node();
	newnode->value = newValue;
	newnode->next = NULL;
	//2. If linked list is empty, newnode will be a head
	if (*head == NULL)
	{
		*head = newnode;
		return;
	}
	//3. find the last node
	Node* last = *head;
	while (last->next!=NULL)
	{
		last = last->next;
	}
	//4. Insert newnode after last node (at the end)
	last->next = newnode;
}
void insertAfter(Node* previous, int newValue)
{
	//1. check if previous node is NULL
	if (previous == NULL)
	{
		cout << "Previous cant be NULL";
		return;
	}
	//2. prepare a newnode
	Node* newnode = new Node();
	newnode->value = newValue;
	//3. insert newnode after previous
	newnode->next = previous->next;
	previous->next = newnode;
}
int main()
{
	//linklist is slow than array
	//random address in memory
	//store two things (value and pointer)
	//dynamic size (can add new n del)
	//need more memory

	Node* head = new Node();
	Node* sec = new Node();
	Node* third = new Node(); //created three node

	//add value and address
	head->value = 1;
	head->next = sec;
	sec->value = 2;
	sec->next = third;
	third->value = 3;
	third->next = NULL;

	//to print
	print(head);
	cout << endl;
	insertFirst(&head, -1);
	print(head);
	cout << endl;
	insertLast(&head, 4);
	print(head);
	cout << endl;
	insertAfter(head, 0);
	print(head);
	 
	system("pause>0");
}