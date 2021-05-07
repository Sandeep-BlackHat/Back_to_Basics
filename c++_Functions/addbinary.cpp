#include<iostream>
using namespace std;

int reverse(int n){
    int ans = 0;
    while(n>0){
        int last = n%10;
        ans = ans*10 + last;
        n /= 10;
    }
    return ans;
}

int addbinary(int x, int y){
    int ans = 0;
    int prevCarry = 0;

    while(x>0 && y>0){
        if(x%2 == 0 && y%2 == 0){
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if(((x%2 == 1) && (y%2 == 0)) || ((x%2 == 0) && (y%2 == 1))){
            if (prevCarry == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        x /= 10;
        y /= 10;
    }

    while(x>0)
    {
        if (prevCarry = 1)
        {
            if(x%2 == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans*10 + x%2;
        }
        x /= 10;
    }

    while(y>0)
    {
        if (prevCarry = 1)
        {
            if(y%2 == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans*10 + y%2;
        }
        y /= 10;
    }

    if(prevCarry == 1){
        ans = ans*10 + 1;
    }

    ans = reverse(ans);
    return ans;
}

int main()
{
    int a, b;
    cin>>a>>b;

    cout<<addbinary(a, b)<< endl;
}