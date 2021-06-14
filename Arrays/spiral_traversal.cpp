#include<bits/stdc++.h>
using namespace std;

int main(){
    //size of array
    int n, m;
    cin>>n>>m;

    //input
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    //traversal
    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;
    while(row_start<=row_end && column_start<=column_end){
        for(int c=column_start; c<=column_end; c++){
            cout<<arr[row_start][c]<<" ";
        }
        row_start++;

        for(int d=row_start; d<=row_end; d++){
            cout<<arr[d][column_end]<<" ";
        }
        column_end--;

        for(int c=column_end; c>=column_start; c--){
            cout<<arr[row_end][c]<<" ";
        }
        row_end--;

        for(int d=row_end; d>=row_start; d--){
            cout<<arr[d][column_start]<<" ";
        }
        column_start++;
    }

    return 0;
}