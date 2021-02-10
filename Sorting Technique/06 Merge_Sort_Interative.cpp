#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
	//defining size of temp arrays
	int n1 = m - l + 1;
	int n2 = r - m;
	
	//Defining temp arrays
	int temp1[n1], temp2[n2];
	
	//giving elements to arrays
	for(int i=0; i<n1; i++)
	{
		temp1[i] = arr[l + i]; //values for 1st array 
	}
	for(int j=0; j<n2; j++)
	{
		temp2[j] = arr[m + 1 + j]; //values for 2nd array 
	}
	
	//initialize
	int i = 0;
	int j = 0;
	int k = l;
	
	//putting elements back
	while(i < n1 && j < n2)
	{
		if(temp1[i] <= temp2[j])
		{
			arr[k] = temp1[i];
			i++;
		}
		else
		{
			arr[k] = temp2[j];
			j++;
		}
		k++;
	}
	
	//putting remaining elements
	while(i < n1)
	{
		arr[k] = temp1[i];
		i++;
		k++;
	}
	
	while(j < n2)
	{
		arr[k] = temp2[j];
		j++;
		k++;
	}
}

void mergesort(int a[], int l, int r)
{
	if(l<r){
	int m = l + ( r - l)/2;
	mergesort(a, l, m);
	mergesort(a, m+1, r);
	merge(a, l, m, r);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
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
	mergesort(arr, 0, n-1);
	cout<<"\nArray after Merge Sorting: ";
	printArray(arr, n);
	return 0;
}
