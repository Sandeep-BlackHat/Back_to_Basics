#include<iostream>
#include<algorithm>
using namespace std;

bool check(int i, int j, int k){
    int a = max(i, max(j, k));
    int b, c;
    if(a == i){
        b = j;
        c = k;
    }
    else if( a == j){
        b = i;
        c = k;
    }
    else{
        b = i;
        c = j;
    }
    if(a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    
    if(check(a, b, c)){
        cout<<"Pythagorian Triplet";
    }
    else{
        cout<<"Not Pythagorian Triplet";
    }
}