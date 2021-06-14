#include<iostream>
#include<climits>
using namespace std;

int max_array_sum(int arr[], int n){
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

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans = max_array_sum(a, n);
    cout<<ans;
    return 0;
}