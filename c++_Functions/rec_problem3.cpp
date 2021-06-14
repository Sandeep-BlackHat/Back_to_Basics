#include<iostream>
using namespace std;

void num(int x){
    if(x == 1){
        cout<<"1"<<endl;
        return;
    }
    num(x - 1);
    cout<<x<<endl;
}

int main()
{
    int n;
    cin>>n;

    num(n);

    return 0;
}