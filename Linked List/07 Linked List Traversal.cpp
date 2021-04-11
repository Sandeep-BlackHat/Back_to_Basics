#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;	
};

void print(Node* n){
	while(n != NULL){
		cout<<n->data<<" ";
		n = n->next;
	}
}

int main()
{
	Node* Head;
	Node* First;
	Node* Second;
	
	Head = new Node();
	First = new Node();
	Second = new Node();
	
	Head->data = 1;
	Head->next = First;
	
	First->data = 2;
	First->next = Second;
	
	Second->data = 3;
	Second->next = NULL;
	
	print(Head);
	return 0;
}
