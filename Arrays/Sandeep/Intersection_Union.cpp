#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>

using namespace std;

int printIntersection(int arr1[], int arr2[], int n, int m)
{
	int i=0, j=0;
	cout<<"\nINTERSECTION :\n";
	while( i < n && j < m)
	{
		if(arr1[i] < arr2[j])
			i++;
		else if(arr2[j] < arr1[i])
			j++;
		else
		{
			cout<<arr2[j]<<" "<<"\n";
			i++;
			j++;
		}
	}
}

int printUnion(int arr1[], int arr2[], int n, int m)
{
	int i=0, j=0;
	cout<<"\nUNION :\n";
	while( i < n && j < m)
	{
		if(arr1[i] < arr2[j])
			cout<<arr1[i++]<<" ";
		else if(arr2[j] < arr1[i])
			cout<<arr2[j++]<<" ";
		else
		{
			cout<<arr2[j]<<" ";
			i++;
			j++;
		}
	}
}

int main()
{
	int i, j, n, m;
	cout<<"Enter Size of Array1: ";
	cin>>n;
	cout<<"Enter Size of Array2: ";
	cin>>m;
	int a[n], b[n], c[n+n];
	cout<<"Enter Elements of 1st Array: ";
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	cout<<"Enter Elements of 2nd Array: ";
	for(j=0; j<m; j++){
		cin>>b[j];
	}
	sort(b, b+m);
	printIntersection(a, b, n, m);
	printUnion(a, b, n, m);
	return 0;
}
