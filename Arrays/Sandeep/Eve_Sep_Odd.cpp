//To Sort odd numbers and even numbers separately
#include<iostream>
using namespace std;

int main()
{
	int arr[100], i, n;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter Elements of array: ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\n Even Numbers: ";
	for(i=0; i<n; i++)
	{
		if((arr[i] % 2) == 0)
		{
			cout<<"\t"<<arr[i];
		}
	}
	
	cout<<"\n Odd Numbers: ";
	for(i=0; i<n; i++)
	{
		if ((arr[i] % 2) != 0)
		{
			cout<<"\t"<<arr[i];
		}
	}
	
	return 0;
}
