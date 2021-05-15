//index of given sum in an Sub-Array

#include<iostream>
using namespace std;

int main()
{
    int n, s;
    cin>>n>>s;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int i=0, j=0, st=-1, ed=-1, sum = 0;
    while(j<n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }

    if(sum == s){
        cout<< i+1 <<" "<< j <<endl;
        return 0;
    }

    while(j<n){
        sum += a[j];
        while(sum > s){
            sum -= a[i];
            i++;
        }
        if (sum == s){
            st = i + 1;
            ed = j + 1;
            break;
        }
        j++;
    }

    cout<<i<<" "<<j<<endl;
}