#include<iostream>

using namespace std;

int add_n(int n){
    int prev_add;
    if(n == 0){
        return 0;
    }

    prev_add = add_n(n-1);
    return n + prev_add;
}

int main()
{
    int x; 
    cin>>x;
    cout<<add_n(x)<<endl;

    return 0;
}