#include <iostream>

using namespace std;

void swap(int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp ;
}
void bubbleSort(int arr[], int size) {

    for(int i = 0 ; i < size - 1 ; i++) {

        for(int j = 0 ; j < size - i - 1 ; j++) {

            if(arr[j] > arr[j + 1 ]) {

                swap( arr[j], arr[j + 1]);
            }
        }
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
    bubbleSort(arr, size);

    cout << "Sorted array: " ;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}