#include<bits/stdc++.h>
using namespace std;

void subArray(int arr[], int n)
{
    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++){
		cout << arr[j] << " ";
		}
		cout<<"\n"<<endl;
    }
}
 
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "All Non-empty Subarrays\n";
    subArray(arr, n);
    return 0;
}
