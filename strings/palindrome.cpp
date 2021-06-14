#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char c[n+1];
    cin>>c;

    bool check = false;

    for(int i=0; i<n; i++){
        if(c[i] == c[n - 1 - i])
            check = true;
        else{
            check = false;
        }
    }

    if(check){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}