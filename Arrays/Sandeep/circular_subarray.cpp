#include<iostream>
#include<climits>
using namespace std;

int max_sum(int arr[], int n){
    int max_till_now = INT_MIN, max_ending = 0;
    for(int i=0; i<n; i++){
        max_ending += arr[i];
        if(max_ending < 0){
            max_ending = 0;
        }
        max_till_now = max(max_till_now, max_ending);
    }
    return max_till_now;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans1 = max_sum(a, n);
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
        a[i] = -1 * a[i];
    }
    int ans = max_sum(a, n);

    //int Max = sum - (-ans);
    //cout<<max(ans1, Max)<<endl;
    cout<<sum<<endl;
}