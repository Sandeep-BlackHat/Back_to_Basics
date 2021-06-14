#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char c[n+1];
    cin.getline(c, n);
    cin.ignore();

    int i=0;
    int curr_len = 0, maxLen = 0;
    int st = 0, maxst = 0;
    while(1)
    {
        if(c[i] == ' ' || c[i] == '\0')
        {
            if(curr_len > maxLen){
                maxLen = curr_len;
                maxst = st;
            }
            curr_len = 0;
            st = i+1;
        }
        else
        curr_len++;
        if(c[i] == '\0')
            break;

        i++;
    }

    cout<<"Maximun length of word: "<<maxLen<<endl;
    cout<<"\nWord with Max Length: ";
    for(int i=0; i<maxLen; i++){
        cout<<c[i+maxst];
    }
    return 0;
}