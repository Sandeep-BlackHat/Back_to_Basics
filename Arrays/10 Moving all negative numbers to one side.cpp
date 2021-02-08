#include<iostream>
using namespace std;

void rearrange(int arr[], int n)
{
  int j=0;
  for(int i=0; i<n; i++)
  {
    if(arr[i]<0)
    {
      if(i!=j)
      swap(arr[i],arr[j]);
      j++;
    }
  }
}
void printarray(int arr[], int n)
{
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<< " ";
  }
}
int main()
{
  int a;
  cout<<"Enter the no. of elements!"<< endl;
  cin>>a;
  int arr[a];
  cout<<"Enter Elements in the Array!"<< endl;
  for(int i=0; i<a;i++)
    {
      cin>>arr[i];
    }
    rearrange(arr, a);
    printarray(arr,a);
}
