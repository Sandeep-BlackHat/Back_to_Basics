#include<iostream>
using namespace std;

string keypad[] = {"", ".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void phone(string s, string ans){

    if(s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string sh = keypad[ch - '0'];
    string ros = s.substr(1);

    for(int i=0; i<sh.length(); i++){
        phone(ros, ans + sh[i]);
    }
}

int main()
{
    phone("23", "");
    return 0;
}