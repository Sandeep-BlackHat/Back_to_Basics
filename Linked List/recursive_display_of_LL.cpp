#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} 
*first = NULL;
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void Recursive_Display(struct Node *p)
{
    if (p != NULL)
    {
        Recursive_Display(p->next);
        printf("%d ", p->data);
    }
}
int main()
{
    struct Node *temp;
    int A[1000],i,n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";

    for(i=0;i<n;i++)
    {
      cin>>A[i];
    }

    create(A, n);

    Display(first);

    return 0;
}