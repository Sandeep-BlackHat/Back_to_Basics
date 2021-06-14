#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s = "e";
    int first = 0;
    for(int i=0; i<s.size(); i++){
        first = (s[i] - 'a');
    }
    cout<<first<<" "<<s;
}