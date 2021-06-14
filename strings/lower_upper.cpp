#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s = "jtyryrcyiug";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    return 0;
}