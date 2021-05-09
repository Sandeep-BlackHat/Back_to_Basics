//Finding the largest elemnt from both side 
//Record Breaking days

#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    if(n == 1){
        cout<<"1"<<endl;
        return 0;
    }
    
    int mx = INT_MIN;
    for(int i=1; i<=n; i++){
        if(a[i] > max(a[n-i], mx) && a[i]>a[i+1]){
            mx = a[i];
        }
        else{
            mx = max(a[n-i], mx);
        }
    }
    cout<<mx;
    return 0;
}