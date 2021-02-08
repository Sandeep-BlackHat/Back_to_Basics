#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_indx;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[j] < arr[min_indx])
			{
				swap(&arr[min_indx], &arr[i]);
			}
		}
	}
}

void printArray(int arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int i, n;
	cout<<"Enter Size: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter Array: ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	selectionSort(arr, n);
	cout<<"\nArray after Sorting: ";
	printArray(arr, n);
	return 0;
}

/* Time Complexity: O(n*n) <Worst Case>
				 O(n) <Best Case when array is sorted>
Space Complexity: O(1) */
