//regex match is used to match any words present in the string

#include<iostream>
#include<regex>
using namespace std;

int main()
{
    string s = "This is a new string for SandeepisSandeep";

    regex r("Sandeep[a-zA-Z]+");
    smatch m;

    cout<<regex_search(s, m, r);
    return 0;
}