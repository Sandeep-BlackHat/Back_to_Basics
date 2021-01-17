# Given an integer array arr of size n, you need to sum the elements of arr.

Example 1:

Input:
n = 3
arr[] = {3 2 1}
Output: 6

Example 2:

Input:
n = 4
arr[] = {1 2 3 4}
Output: 10

**Answer**

#include <bits/stdc++.h>
using namespace std;

//User function Template for C++
//Complete this function

int sumElement(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    sum += arr[i];
    return sum;
}
// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<sumElement(arr,n)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Question Accessing Array

# Answer

#include <iostream>
using namespace std;
 
int main()
{
    int arr[5];
    arr[0] = 5;
    arr[2] = -10;
 
    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[3] = arr[0];
 
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
         << arr[3];
 
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Traversing an array

# Answer

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[6]={11,12,13,14,15,16};
    // Way -1
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
   
  cout<<endl;
      // Way 2
    cout<<"By Other Method:"<<endl;
    for(int i=0;i<6;i++)   
        cout<<i[arr]<<" ";
   
    cout<<endl;
 
    return 0;
}
