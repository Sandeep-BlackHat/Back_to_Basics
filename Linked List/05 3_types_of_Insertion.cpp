#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
}

//Insertion at beg
void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_href);
	*head_href = new_node;
}

//Insertion at given place
void insert_after(Node* prev_node, int new_node)
{
	if(prev_node == NULL)
	{
		cout<<"Previous Node cannot be NULL!";
		return 0;
	}
	
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

//Insert at the end
void append(Node** head_ref, int new_data)
{
	Node new_node = new Node();
	Node *last = *head_ref;
	new_node->data = new_data;
	new_node->next = NULL;
	
	if(*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}
	
	while(last->next != NULL)
	{
		last = last->next;
	}
	
	last->next = new_node;
	return;
}

void printList(Node *node)
{
	while(node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}
  

int main()  
{  

    Node* head = NULL;  
      
    append(&head, 6);  
    push(&head, 7);  
    push(&head, 1);  
    append(&head, 4);    
    insert_after(head->next, 8);  

    cout<<"Created Linked list is: ";  
    printList(head);
    return 0;  
}  
