#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s = "eycayejaeeeeeeyiqawu";

    int freq[26];
    for(int i=0; i<26; i++){
        freq[s[i]-'a']++;
    }

    int maxF = 0;
    char ans = 'a';
    for(int i=0; i<26; i++){
        if(freq[i] > maxF){
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout<<maxF<<" "<<ans<<endl;

    return 0;
}