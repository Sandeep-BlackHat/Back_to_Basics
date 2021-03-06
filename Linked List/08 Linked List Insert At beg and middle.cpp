#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

void push_at_beg(Node** head_ref, int new_data){
	Node* new_node = new Node();
	
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void push_before(Node* prev_node, int new_data){
	if(prev_node == NULL)
	{
		cout<<"Node cannot be empty";
		return;
	}
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

void print(Node* n){
	while(n != NULL){
		cout<<n->data<<" ";
		n = n->next;
	}
}

int main()
{
	Node* Head = NULL;
	push_at_beg(&Head, 5);
	push_at_beg(&Head, 2);
	push_before(Head, 4);
	print(Head);
}
