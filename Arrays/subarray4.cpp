//find out that the given number's sum is present in any subarrays
#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int k){
    int s = 0, en = n-1;
    
    while(s < en){
        if(arr[s] + arr[en] == k){
            cout<<s<<" "<<en<<"\n";
            return true;
        }
        else if(arr[s] + arr[en] < k){
            s++;
        }
        else if(arr[s] + arr[en] > k){
            en--;
        }
        else{
            cout<<s<<" "<<en;
        }
    }
    return false;
}

int main()
{
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k=31;

    cout<<pairsum(arr,8,k)<<endl;

}