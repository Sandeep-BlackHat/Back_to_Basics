/*
Works only with sorted arrays
*/

#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;

int interpolationSearch(int arr[], int size, int number_to_search) {

    int low = 0, heigh = size - 1 ;
    while(low <= heigh && arr[low] <= number_to_search && arr[heigh] >= number_to_search) {

        if (low == heigh) {

            if (arr[low] == number_to_search) {
                return low ;
            } else {
                return -1 ;
            }
        }
        // finding the position most suitable for the value to be present in 
        int pos = pos = low + (((double)(heigh - low) /(arr[heigh] - arr[low])) * (number_to_search - arr[low])) ;

        // compares the value at pos with the number to search and change the high and low mark
        if(arr[pos] == number_to_search) {
            return pos ;
        } else if(arr[pos] <  number_to_search) {
            low = pos + 1 ;
        } else {
            heigh = pos - 1 ;
        }
    }

    return -1 ;
}

int main() {

    array<int, 16> array = { 1, 2 , 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16} ;
    int number_to_search = -100 ;

    int search_result = interpolationSearch(array.data(), array.size(), number_to_search) ;

    if (search_result >= 0) {

        cout << "got it at: " << search_result + 1 << endl ;
    } else {

        cout << "No such value present" << endl ;
    }
    return 0 ;
}