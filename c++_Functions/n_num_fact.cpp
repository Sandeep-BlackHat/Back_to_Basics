#include<iostream>
using namespace std;

int fact(int a){
    int ans;
    if(a == 0){
        return 1;
    }

    ans = fact(a - 1);
    return a * ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<fact(n)<<endl;
    
    return 0;
}