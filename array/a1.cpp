#include <iostream>
using namespace std;
int main()
{
    int i,n,a[20];
    cout <<"Enter The number of Elements :";
    cin >>n;

    for ( i = 0; i <n; i++)
    {
    cout<<"Element is "<<(i+1)<<"is :";     
    cin>>a[i];
    }
    cout<<"The Elements of The Array are";
    for ( i = 0; i<n; i++)
    {
     cout<<"/n"<<a[i];    
    }
   return 0;     

} 

