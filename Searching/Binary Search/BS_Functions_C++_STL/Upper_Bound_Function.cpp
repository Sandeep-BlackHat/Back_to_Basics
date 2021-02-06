#include<bits/stdc++.h>  
using namespace std; 
  
int main() 
{
    vector<int> arr1 = {10, 15, 20, 25, 30, 35}; 
    vector<int> arr2 = {10, 15, 20, 20, 25, 30, 35};  
    vector<int> arr3 = {10, 15, 25, 30, 35}; 
      
      
    cout << "The position of 20 using upper_bound"
           " (in single occurrence case) : "; 
    cout << upper_bound(arr1.begin(), arr1.end(), 20) 
            - arr1.begin(); 
       
    cout << endl; 
      

    cout << "The position of 20 using upper_bound "
             "(in multiple occurrence case) : "; 
    cout << upper_bound(arr2.begin(), arr2.end(), 20)  
            - arr2.begin(); 
       
    cout << endl; 
       
       
    cout << "The position of 20 using upper_bound"
            " (in no occurrence case) : "; 
    cout << upper_bound(arr3.begin(), arr3.end(), 20)  
           - arr3.begin(); 
       
    cout << endl;     
} 
