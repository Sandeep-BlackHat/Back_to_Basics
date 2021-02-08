#include<iostream>
using namespace std;

void printrepeating(int arr[], int size)
{
int i;
cout<< "The Repeating elements are:"<< endl;
  for(i=0; i<size; i++)
  {
    if(arr[abs(arr[i])]>=0)
      arr[abs(arr[i])]=-arr[abs(arr[i])];
    else
    {
      cout<<abs(arr[i])<<" ";
     arr[abs(arr[i])]=0;
    }
  }
}
int main()
{
  int a,j;
  cout<< "Enter Size of array"<< endl;
  cin>> a;
  int arr[a];
  cout<< "Enter Elements of the array."<< endl;
  for(j=0; j<a ; j++)
  {
    cin>> arr[j];
  }
printrepeating(arr, a);
return 0;
}
