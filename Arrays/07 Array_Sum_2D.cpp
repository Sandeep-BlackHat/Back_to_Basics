#include<iostream>
using namespace std;

int main()
{
	int i, j, arr[20][20], arr1[20][20], sum[20][20], n;
	cout<<"Enter Size of array(<20): ";
	cin>>n;
	cout<<"Enter First Array: "<<endl;
	for(i = 0; i< n; i++){
		for(j=0; j<n; j++){
			cin>>arr[i][j];
			cout<<"\n";
		}
	}
	
	cout<<"Enter Second Array: "<<endl;
	for(i=0; i< n; i++){
		for(j=0; j<n; j++){
			cin>>arr1[i][j];
			cout<<"\n";
		}
	}
	
	cout<<"Array after sum is: "<<endl;
	for(i=0; i< n; i++){
		for(j=0; j<n; j++){
			sum[i][j] = arr[i][j] + arr1[i][j];
			cout<<sum[i][j]<<endl;
		}
	}
	return 0;
}
