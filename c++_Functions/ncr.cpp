#include <iostream>
using namespace std;

int fact(int n){
    int res=1;
    for(int i=2; i<=n; i++){
        res *= i;
    }
    return res;
}

int main(){
    int n, r; 
    cin>>n>>r;

    int ans = fact(n);
    int ans1 = fact(r);
    int ans2 = fact(n-r);
    int result = (ans/(ans1 * ans2));
    cout<<result<<endl;
}