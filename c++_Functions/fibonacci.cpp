#include<iostream>
using namespace std;

void fib(int a){
    int t1 = 0;
    int t2 = 1;
    for(int i=1; i<=a; i++){
        cout<<t1<<" ";
        int next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
}

int main(){
    int n;
    cin>>n;

    fib(n);
}