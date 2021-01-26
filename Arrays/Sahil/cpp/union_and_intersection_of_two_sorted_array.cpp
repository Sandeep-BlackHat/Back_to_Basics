#include <iostream>
#include <bits/stdc++.h>
#include <array>

using namespace std;

void print_intersection(int arr[], int arr2[], int arr_length , int arr2_length) {

    int i = 0 , j = 0 ;
    while(i < arr_length && j < arr2_length) {

        if(arr[i] < arr2[j]) {
            i ++ ;
        } else if(arr2[j] < arr[i]) {
            j ++ ;
        } else {
            cout << arr[i] << " " ;
            i++ ; j++ ;
        }
    }
}
int main() {

    array<int, 5> arr1 = {1, 3, 4, 5, 7} ;
    array<int, 4> arr2 = {2, 3, 5, 6} ;
    set<int> union_of_arrays ;
    int loop_length = (arr1.size() > arr2.size() ? arr1.size(): arr2.size() ) ;
    for(int i = 0 ; i < loop_length ; i++) {

        // adding the elements of the two array into the set, and since set cant have repeated values we wont get duplicate values
        if(i < arr1.size()) {
            union_of_arrays.insert(arr1[i]) ;
        }
        if(i < arr2.size()) {
            union_of_arrays.insert(arr2[i]) ;
        }
    }
    for(int i : union_of_arrays) {
        cout << i << " " ;
    }
    cout << endl ;
    print_intersection(arr1.data(), arr2.data(), arr1.size(), arr2.size()) ;

    return 0 ;
}