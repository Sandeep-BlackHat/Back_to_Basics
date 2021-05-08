//Print sum of all sub arrays of an given array
// array subarray count forula : (n*(n+1))/2

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum += a[j];
            cout<<sum<<endl;
        }
    }
    
    return 0;
}