#include <iostream>
using namespace std;
int main()
{
 int i,n,a[20],sum=0;
 float mean=0.0;
 cout <<"Enter The number Of elements:";
 cin>>n;
 for (i = 0; i <n; i++)
 {
 cout<<"Element"<<i<<"is :";
 cin>>a[i];
 }
 for (i = 0; i <n; i++)
 {
     sum=sum+a[i];
     
 }
 mean=(float)sum/n;
 cout<<"Mean of"<<n<<"numbers is"<<mean;
 
    
 return 0;   
}