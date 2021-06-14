//Print sum of all sub arrays of an given array
// array subarray count forula : (n*(n+1))/2

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int sum = 0, mx = 0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum += a[j];
            cout<<endl;
        }
        if(mx < sum){
            mx = sum;
        }
        else{
            cout<<mx;
            break;
        }
    }
    
    return 0;
}