//Sum of elements in array
#include<iostream>
using namespace std;

//function for array sum
int arr_sum(int a[100], int n)
{
	int i;
	int sum = 0;
	for(i=0; i<n; i++)
	{
		sum += a[i];
	}
	cout<<sum;
}

int main()
{
	int arr[100], i, x;
	cin>>x;
	for(i=0; i<x; i++)
	{
		cin>>arr[i];
	}
	arr_sum(arr, x);
	return 0;
}
