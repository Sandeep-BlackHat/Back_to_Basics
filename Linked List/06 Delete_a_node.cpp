#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(Node **head_ref, int key)
{

    Node *temp = *head_ref;
    Node *prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
            return;

        prev->next = temp->next;

        delete temp;
    }
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{

    Node *head = NULL;

    push(&head, 8);
    push(&head, 9);
    push(&head, 3);
    push(&head, 5);

    puts("Created Linked List: ");
    printList(head);

    deleteNode(&head, 9);
    puts("\nLinked List after Deletion of 9: ");

    printList(head);

    return 0;
}
