#include<iostream>
using namespace std;

int main()
{
	int i, arr[10], n, temp;
	cout<<"Size of array: ";
	cin>>n;
	cout<<"Enter elements of array: ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	for(i=0; i<n-1; i++)
	{
		arr[i] = arr[i] ^ arr[i+1];
		arr[i+1] = arr[i] ^ arr[i+1];
		arr[i] = arr[i] ^ arr[i+1];	
	}
	
	for(i=0; i<n; i++)
	{
		cout<<arr[i];
	}
	return 0;
}
