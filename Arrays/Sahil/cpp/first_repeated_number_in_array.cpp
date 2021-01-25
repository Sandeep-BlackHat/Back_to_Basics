/*
 * Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest.

 * Examples:

    Input:  arr[] = {10, 5, 3, 4, 3, 5, 6}
    Output: 5 [5 is the first element that repeats]

    Input:  arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
    Output: 6 [6 is the first element that repeats]
 * */

#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

bool if_number_repeated_in_array(array<int, 9> arr, int number) {

    int count = 0 ;
    for(int i : arr) {
        if(i == number) {
            count += 1 ;
        }
    }
    return (count > 1) ;
 }

int main() {

    array<int, 9> arr = {6, 10, 5, 4, 9, 120, 4, 6, 10} ;
    int repeated_number ;
    for(int i : arr) {

        if(if_number_repeated_in_array(arr, i)) {
            repeated_number = i ;
            break ;
        }
    }
    cout << repeated_number  ;
    return 0 ;
}