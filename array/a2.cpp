#include<iostream>
#include<vector>
using namespace std;
int main() {

    int n ,s ;
    cout << "Enter the size of the square: " ;
    cin >> n ;
    s = n ;
    for(int i = 1 ; i <= n ; i++ ) {

        int k = n ;
        for(int j = 1 ; j <= i ; j++) {

            cout << k ;
            k -= 1 ;
        }

        for(int j = n ; j > i ; j-- ) {

            cout << s  ;
        }

        for(int j = n ; j > i ; j-- ) {

            cout << s  ;
        }
        s -= 1 ;

        vector<int> vect ;
        k = n ;
        for(int j = 1 ; j < i ; j++) {

            vect.push_back(k) ;
            k -= 1 ;
        }

        for(int j = vect.size()-1 ; j >= 0 ; j-- ) {

            cout << vect.at(j) ;
        }
        cout << endl ;
    }
    s = 2 ;

    for(int i = 1 ; i < n ; i++) {

        int k = n ;
        for(int j = n-i ; j > 0 ; j -- ) {
            cout << k ;
            k -= 1 ;
        }

        for(int j = 0 ; j < i ; j++) {
            cout << s ;
        }

        for(int j = 1 ; j < i ; j++) {
            cout << s ;
        }
        s += 1 ;

        vector<int> vect ;
        int l = n ;
        for(int j = 1 ; j <= (n-i) ; j++) {
            vect.push_back(l);
            l-=1 ;
        }

        for(int j = vect.size()-1 ; j >= 0 ; j--) {
            cout << vect.at(j) ;
        }

        cout << endl ;
    }
    return 0;
}