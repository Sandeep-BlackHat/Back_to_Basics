#include<iostream>
using namespace std;

bool sorted(int arr[], int x){
    if(x == 1){
        return true;
    }

    return arr[0] < arr[1] && sorted(arr+1, x-1);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<sorted(arr, n)<<endl;

    return 0;
}