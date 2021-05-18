//regex match as a c++ STL

#include<iostream>
#include<regex>
using namespace std;

int main()
{
    string s = "SandepisSandep";

    regex b("(Sandep)(.*)");

    if( regex_match(s, b)){
        cout<<"String a matches b\n";
    }

    if( regex_match(s.begin(), s.end(), b) ){
        cout<<"String a matches b with range";
    }
    return 0;
}