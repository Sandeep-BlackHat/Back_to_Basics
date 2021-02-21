/*
Works only with sorted arrays
*/

#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[], int size, int number_to_search) {

    int min = 0 ;
    int max = size - 1 ;

    while (min <= max) {

        int midFirst = min + (max - min) /  3 ;
        int midSecond = midFirst + (max - min) / 3 ;

        if(arr[midFirst] == number_to_search) {

            return midFirst ;
        } else if(arr[midSecond] == number_to_search) {

            return midSecond ;
        } else if(arr[midFirst] > number_to_search) {

            max = midFirst - 1 ;
        } else if(arr[midSecond] < number_to_search) {
            
            min = midSecond + 1 ;
        } else {

            min = midFirst + 1 ;
            max = midSecond - 1 ;
        }
    } 

    return -1 ;
}

int main() {

    array<int, 16> array = { 1, 2 , 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16} ;

    int number_to_search = 2 ;

    int search_result = jumpSearch(array.data(), array.size(), number_to_search) ;

    if (search_result >= 0) {

        cout << "got it at: " << search_result + 1 << endl ;
    } else {

        cout << "No such value present" << endl ;
    }
    return 0 ;
}