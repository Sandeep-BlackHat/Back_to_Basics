#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int maxsum = INT_MIN, sum = 0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum += a[j];
        }
        //cout<<endl;
        maxsum = max(maxsum, sum);
    }
    cout<<maxsum<<endl;
}