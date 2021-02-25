#include <iostream>

using namespace std;

void insertionSort(int arr[], int size) {

    for(int i = 0 ; i < size ; i++) {

        int temp = arr[i] ;
        int loc = i - 1 ;
        while(loc >= 0 && arr[loc] > temp) {

            arr[loc + 1] = arr[loc] ;
            loc -= 1 ;
        }
        arr[loc + 1] = temp ;
    }
}
int main() {

    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Default array: " ; 
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, size);

    cout << "Sorted array: " ;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}