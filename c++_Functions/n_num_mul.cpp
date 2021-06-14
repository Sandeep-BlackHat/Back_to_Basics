#include<iostream>

using namespace std;

int pow_mul(int x, int y){
    int ans;
    if(y == 0){
        return 1;
    }
    ans = pow_mul(x, y-1);

    return x*ans;
}

int main()
{
    int n, o; 
    cin>>n>>o;
    cout<<pow_mul(n, o)<<endl;

    return 0;
}