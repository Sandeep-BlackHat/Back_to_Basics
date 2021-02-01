//Decimal to Binary Conversion
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int x, arr[10], i;
	cout<<"Enter the Decimal No.: ";
	cin>>x;
	for(i=0; x>0; i++){
		arr[i] = x % 2;
		x = x / 2;
	}
	cout<<"The Binary code is ";
	for(i=i-1; i>=0; i--)
	{
		cout<<arr[i];
	}
	return 0;
}
