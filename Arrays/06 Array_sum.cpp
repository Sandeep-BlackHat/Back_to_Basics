#include<iostream>
using namespace std;

int main()
{
	int i, arr[20], arr1[20], sum[20], n;
	cout<<"Enter Size of array(<20): ";
	cin>>n;
	cout<<"Enter First Array: "<<endl;
	for(i = 0; i<= n; i++)
	{
		cin>>arr[i];
		cout<<"\n";
	}
	cout<<"Enter Second Array: "<<endl;
	for(i=0; i<=n; i++)
	{
		cin>>arr1[i];
		cout<<"\n";
	}
	cout<<"Array after sum is: "<<endl;
	for(i=0; i<= n; i++)
	{
		sum[i] = arr[i] + arr1[i];
		cout<<sum[i]<<endl;
	}
	return 0;
}
