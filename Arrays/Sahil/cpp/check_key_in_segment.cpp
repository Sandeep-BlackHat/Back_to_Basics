/*
 * Given an array arr[] and size of array is n and one another key x, and give you a segment size k. The
 * task is to find that the key x present in every segment of size k in arr[].
 *
 * Example:
 * Input :
    arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3}
    x = 3
    k = 3
    Output : Yes
    There are 4 non-overlapping segments of size k in the array, {3, 5, 2}, {4, 9, 3}, {1, 7, 3} and {11, 12, 3}. 3 is present all segments.
*/

#include<iostream>
#include<array>

using namespace std;

int main() {

    array<int, 13> arr = { 21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 25} ;

    int key = 23, segment = 5 ;
    double gap = ((double) arr.size() / segment) ;

    int div = int(gap) != gap ? int(gap) + 1 : int(gap) ;

    int startingValue = 0, endingValue = 0, count = 0;

    for(int i = 0 ; i < div ; i++) {

        startingValue = endingValue ;

        endingValue = endingValue + segment ;

        if( endingValue > arr.size() ) {
            // exception handling so if any segment is small then we don't get an out of index error
            endingValue = arr.size() ;
        }

        for(int j = startingValue ; j < endingValue ; j++) {

            if(arr[j] == key) {
                count += 1 ;
                break ;
            }
        }
    }
    cout << ((count == div) ? "Yes" : "No") ;

    return 0 ;
}
