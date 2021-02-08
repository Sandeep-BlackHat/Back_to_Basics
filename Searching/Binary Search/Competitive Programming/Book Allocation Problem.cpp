#include<bits/stdc++.h>
using namespace std;


int findPages(int arr[], int n, int m);

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        cout << findPages(A, n, m) << endl;
    }
    return 0;
}

bool solve(int *a, int n, int mid, int m){
    int stu = 1;
    int sum = 0;
    for(int i=0; i<n; i++){
        if(a[i]>mid) return false;
        if(a[i]+sum > mid){
            stu++;
            sum = a[i];
            if(stu>m) return false;
        }
        else sum += a[i];
    }
    return true;
}

int findPages(int *a, int n, int m) {
    int lb = 0;
    int s = 0; 
    int ans = 0;
    for(int i=0; i<n; i++) s+= a[i];
    int ub = s;
    while(lb<=ub){
        int mid = (lb + ub) / 2;
        if(solve(a, n, mid, m)){
            ans = mid;
            ub = mid - 1;
        }
        else{
            lb = mid + 1;
        }
    }
    return ans;
}
