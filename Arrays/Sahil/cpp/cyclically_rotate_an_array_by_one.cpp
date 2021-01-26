/*
 * Given an array, cyclically rotate the array clockwise by one.

    Examples:

        Input:  arr[] = {1, 2, 3, 4, 5}
        Output: arr[] = {5, 1, 2, 3, 4}
 * */

#include <iostream>
#include <array>

using namespace std ;

int main() {

    array<int, 5> arr = {1, 2, 3, 4, 5} ;
    int number_to_rotation = 1 ; // here you can enter how many values you want it to rotate by
    for(int i = 0 ; i < number_to_rotation ; i++) {
        int temp = arr[0];
        for(int j = 0 ; j < arr.size() ; j++) {

            if(j+1 < arr.size()) {

                int temp_2 = arr[j+1] ;
                arr[j+1] = temp ;
                temp = temp_2 ;
            } else {
                arr[0] = temp ;
            }
        }
    }
    for(int i : arr) {
        cout << i << ", " ;
    }
}