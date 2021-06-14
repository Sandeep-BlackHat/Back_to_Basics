//Optimized Search

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cin>>target;
    bool flag = false;
    int r = 0, c = m-1;
    //array search
    while(r <= c){
        if(arr[r][c] == target){
            flag = true;
        }
        if(arr[r][c] < target){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag){
        cout<<"Element found";
    }
    else{
        cout<<"Not Found";
    }

    return 0;
}