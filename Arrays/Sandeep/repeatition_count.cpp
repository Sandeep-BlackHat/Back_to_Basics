#include<iostream>
#include<stdio.h>
using namespace std;

void rep_no(int arr[], int n, int x)
{
	int i, count = 0;
	for(i=0; i<n; i++)
	{
		if(arr[i] == x)
		{
			count++;
		}
		else
		{
			arr[i] = arr[i+1];
		}
	}
	cout<<count;
}

int main()
{
	int arr[] = {2, 3, 4, 5, 4, 8, 4, 2, 12, 2, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x;
	cout<<"enter number to find rep: ";
	cin>>x;
	rep_no(arr, n, x);
	return 0;
}
