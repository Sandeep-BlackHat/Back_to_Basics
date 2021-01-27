#include<iostream>
using namespace std;

void leftrotatebyone(int arr[], int n)
{
	int temp = arr[0], i;
	for(i=0; i<n-1; i++)
		arr[i] = arr[i+1];
		
	arr[i] = temp;	
}

void leftrotate(int arr[], int d, int n)
{
	for(int i=0; i<d; i++)
		leftrotatebyone(arr, n);
}

void display(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}

int main()
{
	int arr[20], n, d, i;
	std::cout<<"Enter the Size of Array: ";
	std::cin>>n;
	std::cout<<"Enter the Number by which the elements to be roatated: ";
	std::cin>>d;
	std::cout<<"Enter Array Elements: ";
	for(i=0; i<n; i++)
		std::cin>>arr[i];
	
	leftrotate(arr, d, n);
	display(arr, n);
	
	return 0;
}
