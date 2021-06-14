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

    int row_start = 0, column_start = 0, row_end = n-1, column_end = m - 1;
    while(row_start<=row_end && column_start<=column_end){
        for(int col=column_start; col<=column_end; col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        for(int r=row_start; r<=row_end; r++){
            cout<<arr[r][column_end]<<" ";
        }
        column_end--;

        for(int col=column_end; col>=column_start; col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        for(int r=row_end; r>=row_start; r--){
            cout<<arr[r][column_start]<<" ";
        }
        column_start++;
    }
    return 0;
}