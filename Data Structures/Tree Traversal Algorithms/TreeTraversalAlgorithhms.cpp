#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = nullptr;
	return newNode;
}

void printTreePreorder(Node* root)
{
	if (root == nullptr) return;

	cout << root->data << endl;
	printTreePreorder(root->left);
	printTreePreorder(root->right);
}

void printTreeInorder(Node* root)
{
	if (root == nullptr) return;

	printTreeInorder(root->left);
	cout << root->data << endl;
	printTreeInorder(root->right);
}

void printTreePostorder(Node* root)
{
	if (root == nullptr) return;

	printTreePostorder(root->left);
	printTreePostorder(root->right);
	cout << root->data << endl;
}

int main()
{
	// 1. preorder (data, left, rigt)
	// 2. inorder (left, data, right)
	// 3. postorder (left, right, data)

	//Level 1
	Node* root = createNode(1);
	//Level 2
	root->left = createNode(2);
	root->right = createNode(3);
	//Level 3
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	//Level 4
	root->left->right->left = createNode(9);
	root->right->right->left = createNode(15);

	printTreePreorder(root);
	printTreeInorder(root);
	printTreePostorder(root);


	system("pause>0");
}