#include<iostream>
using namespace std;

int Sub_Array_Sum(int arr[], int n, int sum)
{
	int arr_sum = arr[0], start = 0, i;
	for(i=1; i<n; i++)
	{
		while(arr_sum > sum && start < i-1)
		{
			arr_sum = arr_sum - arr[start];
			start++;
		}
		
		if(arr_sum == sum)
		{
			cout<<"\nSum found betweem "<<start<<" and "<<i-1;
			return 1;
		}
		
		if(i<n)
		{
			arr_sum = arr_sum + arr[i];
		}
	}
	cout<<"No Sub Array found!";
	return 1;
}

int main()
{
	int arr[20], i, n, sum;
	cout<<"Enter Size of Array: ";
	cin>>n;
	cout<<"Enter Total Sum you want: ";
	cin>>sum;
	cout<<"Enter Elements of Array: ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	Sub_Array_Sum(arr, n, sum);
	return 0;
}
