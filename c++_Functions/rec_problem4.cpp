#include<iostream>
using namespace std;

int first_occ(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return first_occ(arr, n, i+1, key);
}

int last_occ(int arr[], int n, int i, int key){

    if(i == n){
        return -1;
    }
    
    int rest = last_occ(arr, n, i+1, key);

    if(rest != -1){
        return rest;
    }

    if(arr[i] == key){
        return i;
    }
    return -1;
}

int main()
{
    int n, key, i=0;
    cin>>n>>key;;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<first_occ(arr, n, i, key)<<" "<<last_occ(arr, n, i, key)<<endl;

    return 0;
}