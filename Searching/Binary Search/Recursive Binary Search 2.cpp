#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int k, int beg, int end)
{
    if (end >= beg)
    {
        int mid = beg + (end - beg) / 2;
        if(arr[mid] == k)
        {
            return mid;
        }
        
        if(arr[mid] > k)
        {
            return binarysearch(arr, k, beg, mid - 1);
        }
    
        return binarysearch(arr, k, mid + 1, end);
    }
    return -1;
}

// { Driver Code Starts.
int main()
{
	int N;
    cout<<"Enter Size: ";
    cin>>N;
    int arr[N], beg, end;
    cout<<"Enter Array: ";
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int key;
    cout<<"Enter Key: ";
    cin>>key;
    int found = binarysearch(arr, key, 0, N-1);
    if (found == -1)
		cout<<"Not found";
    else
    	cout<<"Element is found at index: "<<found;
}
