//in optimized search

#include<iostream>
using namespace std;

int main(){
    int n, m, x;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    bool flag = false;
    cin>>x;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == x){
                flag = true;
            }
        }
    }

    if(flag)
        cout<<"Found";
    else
        cout<<"Not Found";
    return 0;
}