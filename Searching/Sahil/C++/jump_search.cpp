/*
Works only with sorted arrays
*/

#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[], int size, int number_to_search) {

    int step = sqrt(size) ;
    int totalStep = (size) / sqrt(size)  ;
    int previous_step = 0 ;

    while (arr[step] < number_to_search && step < size) { 

        // searching for the suitable block
        previous_step = step;
        step += sqrt(size) ;
    } 
    while (arr[previous_step] < number_to_search) {

        // linear search in that block till that element is reached
        previous_step += 1 ;
        if(previous_step == size) {
            return -1 ;
        }
    }
    // checking if that element is the element we require
    if(arr[previous_step] == number_to_search) {

        return previous_step ;
    }

    return -1 ;
}

int main() {

    array<int, 16> array = { 1, 2 , 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16} ;
    int number_to_search = 14 ;

    int search_result = jumpSearch(array.data(), array.size(), number_to_search) ;

    if (search_result >= 0) {

        cout << "got it at: " << search_result + 1 << endl ;
    } else {

        cout << "No such value present" << endl ;
    }
    return 0 ;
}