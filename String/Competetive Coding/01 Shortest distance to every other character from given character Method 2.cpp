#include <bits/stdc++.h>
 
using namespace std;

void shortestDistance(string S, char X)
{ 

    int prev = INT_MAX;
    vector<int> ans;
     
    for (int i = 0; i < S.length(); i++)
    { 
        if (S[i] == X) 
            prev = i; 
        if (prev == INT_MAX)
            ans.push_back(INT_MAX);
        else
            ans.push_back(i - prev);
    }
 
    prev = INT_MAX; 
    for (int i = S.length() - 1; i >= 0; i--)
    { 
        if (S[i] == X) 
            prev = i;
         if (prev != INT_MAX)
            ans[i] = min(ans[i], prev - i); 
    }
 
    for (auto val: ans)
        cout << val << ' ';
}

int main()
{
    string S = "helloworld";
    char X = 'o';
    shortestDistance(S, X); 
    return 0;
}
