#include<bits/stdc++.h> 
using namespace std; 

bool isPalindrome(string str, int low, int high) 
{ 
    while (low < high) 
    { 
        if (str[low] != str[high]) 
            return false; 
        low++; 
        high--; 
    } 
    return true; 
} 
  

void allPalPartUtil(vector<vector<string> >&allPart, vector<string> &currPart,  
                   int start, int n, string str) 
{ 

    if (start >= n) 
    { 
        allPart.push_back(currPart); 
        return; 
    } 
  
    for (int i=start; i<n; i++) 
    { 
 
        if (isPalindrome(str, start, i)) 
        { 

            currPart.push_back(str.substr(start, i-start+1)); 
  
 
            allPalPartUtil(allPart, currPart, i+1, n, str); 

            currPart.pop_back(); 
        } 
    } 
} 

void allPalPartitions(string str) 
{ 
    int n = str.length(); 

    vector<vector<string> > allPart; 

    vector<string> currPart;  

    allPalPartUtil(allPart, currPart, 0, n, str); 

    for (int i=0; i< allPart.size(); i++ ) 
    { 
        for (int j=0; j<allPart[i].size(); j++) 
            cout << allPart[i][j] << " "; 
        cout << "\n"; 
    } 
} 

int main()
{
	char str[100];
	cout<<"Enter the String: ";
	cin>>str;
	cout<<"\nThe Palindrome partitions are: \n";
	allPalPartitions(str); 
    return 0;
}
