/*
Works only with sorted arrays
*/

#include<iostream>
#include<array>
using namespace std;

int binary_search(int arr[], int size, int number_to_search) {

    int min = 0 ;
    int max = size-1 ;
    int index = -1 ;

    while( min <= max ) {

        int mid = (max + min) / 2 ;
            
        if(arr[mid] < number_to_search) {
            min = mid + 1 ;
        } else if(arr[mid] > number_to_search) {
            max = mid - 1 ;
        } else {
            index = mid ;
            break;
        }
    }
    return index ;
}

int main() {

    array<int, 5> array = { 2, 3, 4, 10, 40 } ;

    int number_to_search = 89 ;

    int search_result = binary_search(array.data(), array.size(), number_to_search) ;

    if (search_result >= 0) {

        cout << "got it at: " << search_result + 1 << endl ;
    } else {

        cout << "No such value present" << endl ;
    }
    return 0 ;
}