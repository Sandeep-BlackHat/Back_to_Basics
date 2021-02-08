#include<iostream>
#include<vector>
#include <climits>

using namespace std;
class Solution {
public:
    void shortestToChar(string s, char c) {
        
        int len=(int ) s.size();
        vector<int> ans(len,INT_MAX);
        
        int pos=-1;
        
        for(int i=0;i<len;i++)
        {
            if(s[i]==c)
            {
                pos=i;
            }
            
            if(pos!=-1)
            {
                ans[i]=(i-pos);
            }
        }
         pos=-1;
        
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]==c)
            {
                pos=i;
            }
            
            if(pos!=-1)
            {
                ans[i]=min(ans[i],(pos-i));
            }
        }
        for (auto val: ans) 
        cout << val << ' '; 
    }
};

int main()
{
    
    Solution a;
    string s="loveleetcode";
    char c= 'e';
    a.shortestToChar(s,c);
    return 0;
}
