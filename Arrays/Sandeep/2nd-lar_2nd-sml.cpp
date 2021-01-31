//To find 2nd largest and 2nd smallest elements in array
#include<iostream>
using namespace std;

//Code to sort array
//Ascending order
int sort(int a[100], int n)
{
	int i, j, temp;
	for(i=0; i< n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

//For 2nd largest element
int second_lar(int a[100], int n)
{
	int i;
	cout<<"The Second Largest element is: ";
	cout<<a[n-2];
}

//For 2nd smallest element
int second_sml(int a[100], int n)
{
	int i;
	cout<<"\nThe Second Smallest element is: ";
	cout<<a[1];
}

//Driver COde
int main()
{
	int arr[100], x, i;
	cout<<"Enter size of array: ";
	cin>>x;
	cout<<"Enter Elements of array: ";
	for(i=0; i<x; i++)
	{
		cin>>arr[i];
	}
	sort(arr, x);
	second_lar(arr, x);
	second_sml(arr, x);
	return 0;
}
