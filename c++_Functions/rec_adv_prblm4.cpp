//Removing Duplicates From a String

#include<iostream>
using namespace std;

string rmvdup(string s){
    if(s.length() == 0){
        return "";
    }

    char ch = s[0];
    string ans = rmvdup(s.substr(1));

    if(ch == ans[0]){
        return ans;
    }
    return ch+ans;
}

int main()
{
    string x;
    getline(cin, x);
    cout<<rmvdup(x)<<endl;

    return 0;
}