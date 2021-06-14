#include<iostream>
using namespace std;

void num(int x){
    if(x == 0){
        return;
    }
    cout<<x<<endl;
    num(x - 1);
}

int main()
{
    int n;
    cin>>n;

    num(n);

    return 0;
}