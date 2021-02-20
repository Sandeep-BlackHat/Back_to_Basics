#include <iostream>
#include <array>
using namespace std;

int liniar_search(int arr[], int size, int number_to_search) {

    int location = -1 ;
    for (int i = 0; i < size; i++) {
        if(arr[i] == number_to_search) {
            location = i ;
            break ;
        }
    }
    return location ;
}
int main() {

    array<int, 10> arr = {10, 20, 80, 30, 60, 50,  110, 100, 130, 170} ;
    int number_to_search = 110 ;
    cout << "The location of " << number_to_search << " is " << liniar_search(arr.data(), arr.size(), number_to_search) + 1 ;
    return 0;
}
