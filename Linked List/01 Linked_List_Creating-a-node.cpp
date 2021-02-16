#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data; //Defining Data
		Node* next; //Defining node for refering next element
};


int printList(Node* n)
{
	while(n != NULL)
	{
		cout<<n->data<<" ";
		n = n->next;
	}
}
int main()
{
	Node* head = NULL; //defining NULL so that space is empty
	Node* second = NULL;
	Node* third = NULL;
	
	head = new Node(); //giving new node
	second = new Node();
	third = new Node();
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	printList(head);
	
	return 0;
}
