//Revrse String

#include<iostream>
using namespace std;

void reverse(string s){
    if(s.length() == 0){
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main()
{
    string ch;
    getline(cin, ch);

    reverse(ch);

    return 0;
}