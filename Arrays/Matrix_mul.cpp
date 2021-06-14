#include<iostream>
using namespace std;

int main()
{
    int n, m, o;
    cin>>n>>m>>o;

    int arr[n][m];
    int arr2[m][o];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>arr[i][j];

    for(int i=0; i<m; i++)
        for(int j=0; j<o; j++)
            cin>>arr2[i][j];

    int ans[n][o];
    for(int i=0; i<n; i++)
        for(int j=0; j<o; j++)
            ans[i][j] = 0;

    //multiply
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            for(int k=0; k<o; k++)
                ans[i][k] += arr[i][j] * arr2[j][k];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<o; j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}