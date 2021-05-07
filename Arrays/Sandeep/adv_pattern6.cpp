/*Number Pyramid
         1
        212
       32123
      4321234
     543212345
    65432123456
   7654321234567
  876543212345678
 98765432123456789
*/
#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    for(int i=1; i<n; i++){
        int j;
        for(j=1; j<=(n-i); j++){
            cout<<" ";
        }
        int count=i;
        for(; j<=n; j++){
            cout<<count;
            count--;
        }
        int count1=2;
        for(; j<=n+i-1; j++){
            cout<<count1;
            count1++;
        }
        cout<<endl;
    }
}