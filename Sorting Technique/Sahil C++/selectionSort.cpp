#include <iostream>

using namespace std;

void swap(int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp ;
}
void selectionSort(int arr[], int size) {

    for(int i = 0 ; i < size ; i++) {

        int least_value = i ;
        for(int j = i + 1 ; j < size ; j++) {
            if(arr[j] < arr[least_value]) {
                least_value = j ;
            }
        }
        swap(arr[least_value], arr[i]) ;
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
    selectionSort(arr, size);

    cout << "Sorted array: " ;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
