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

    int ans = 0;
    int mx = -1;
    for(int i=1; i<=n; i++){
        if(a[i] > mx && a[i]>a[i+1]){
            ans++;
        }
        else{
            mx = max(a[i], mx);
        }
    }
    cout<<mx<<endl;
    return 0;
}