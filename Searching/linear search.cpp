#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 20
int main(int argc, char *argv[])
{
	int arr[size],num,i,n,found=0,pos=-1;
	cout<<"\n  Enter the no. of elements in the array: ";
	cin>>n;
	cout<<"\n Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n Enter the no. to search: ";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			found=1;
			pos=i;
			cout<<"\n"<<num<<" is found in the array at position = "<<i+1;
			break;
		}
	}
	if(found==0)
	cout<<"\n"<<num<<" does not exist in the array";
	return 0;
}
