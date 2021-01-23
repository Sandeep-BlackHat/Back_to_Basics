#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 10

int smallest(int arr[],int k,int n);
void selection_sort(int arr[],int n);

int main(int argc, char *argv[])
{
	int arr[size],num,i,n,beg,end,mid,found=0;
	cout<<"\nEnter the no. of elements: ";
	cin>>n;
		cout<<"\n Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selection_sort(arr,n);
	cout<<"\nThe sorted array is: \n";
	for(i=0;i<n;i++)
	cout<<arr[i]<<"\t";
	cout<<"\nEnter the element to be searched: ";
	cin>>num;
	beg=0;end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==num)
		{
			cout<<"\n"<<num<<" is present in the array at position "<<mid+1;
			found=1;
			break;
		}
		else if(arr[mid]>num)
		end=mid-1;
		else
		beg=mid+1;
	}
	
	if(beg>end && found==0)
	cout<<"\n"<<num<<" doesn't exist in the array";
	return 0;
}

int smallest(int arr[],int k,int n)
{
	int pos=k,small=arr[k],i;
	for(i=k+1;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			pos=i;
		}
	}
	return pos;
}

void selection_sort(int arr[], int n)
{
	int k,pos,temp;
	for(k=0;k<n;k++)
	{
		pos=smallest(arr,k,n);
		temp=arr[k];
		arr[k]=arr[pos];
		arr[pos]=temp;
	}
}

