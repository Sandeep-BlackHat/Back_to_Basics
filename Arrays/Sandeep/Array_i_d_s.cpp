#include<iostream>
using namespace std;

void Array_Insert(int arr[100], int n, int x, int y)
{
	int i;
	n++; //increasing size of array
	for(i=n; i<y; i--)
	{
		arr[i] = arr[i-1]; //array shifted for getting element inserted
	}
	
	arr[n-1] = x; //new element inserted
	
	cout<<"Array is: ";
	for(i=0; i<n; i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";
}

void Array_Delete(int arr[100], int n, int y)
{
	int i;
	if(y > n)
	{
		cout<<"\nOut of range";
	}
	else 
	{
		--y;
		for(i=y; i<n-1; i++)
		{
			arr[i] = arr[i+1];
		}
	}
	cout<<"Array is: ";
	for(i=0; i<n-1; i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";
}

void Array_Search(int arr[100], int n, int x)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(arr[i] == x)
		{
			cout<<"\nArray Element found at: "<<i;
		}
	}
}

int Array_Disp(int arr[100], int n)
{
	int i;
	cout<<"Array is: ";
	for(i=0; i<n; i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";
}

int main()
{
	int arr[100], n, i, x, y, o;
	cout<<"Enter Size of Array: ";
	cin>>n;
	cout<<"\nEnter Array: ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	Array_Disp(arr, n);
	cout<<"\n1. Array Insertion";
	cout<<"\n2. Array Deletion";
	cout<<"\n3. Array Search";
	cout<<"\n3. Array Display\n";
	cout<<"\nEnter Option: ";
	cin>>o;
	switch (o)
	{
		repeat:
		case 1:
			cout<<"Enter the number to be inserted: ";
			cin>>x;
			cout<<"Enter Position where the element is to be inserted: ";
			cin>>y;
			Array_Insert(arr, n, x, y);
			break;
			
		case 2:
			cout<<"Enter the number to be deleted: ";
			cin>>x;
			cout<<"Enter Position where the element is to be deleted: ";
			cin>>y;
			Array_Delete(arr, n, y);
			break;
			
		case 3:
			cout<<"Enter the number to be searched: ";
			cin>>x;
			Array_Search(arr, n, x);
			break;
			
		case 4:
			Array_Disp(arr, n);
			break;
			
		default:
			cout << "Wrong Choice, Pal! Choose again.";
			break;
		goto repeat;
	}
}
