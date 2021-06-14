//Sub-Sequence
//Print all sub seq present in an Array with Ascii Code


#include<iostream>
using namespace std;

int subsq(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return 0;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);
    subsq(ros, ans);
    subsq(ros, ans+ch);
    subsq(ros, ans + to_string(code));
}

int main()
{   
    subsq("AB","");
    return 0;
}