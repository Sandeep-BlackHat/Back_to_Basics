#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<"\n";
    }
};
void append(struct array *arr,int x)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=x;
    }
};
void insert(struct array *arr,int index,int value)
{
        if(index>=0 && index<=arr->length)
        {    int i;
            for(i=arr->length;i>index;i--)
            {
                arr->A[i]=arr->A[i-1];
            }
        }arr->A[index]=value;
        arr->length++;
};
int main()
{
    struct array arr={{2,4,5,6,7},10,5};
    
    append(&arr,20);
    insert(&arr,4,10);
    display(arr);


    return 0;
    
}
