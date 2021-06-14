#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int sum = 0;
    int org = n;
    while(n>0){
        int last_digit = n%10;
        sum += pow(last_digit, 3);
        n = n/10;
    }
    
    if (sum == org)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;
    }
}