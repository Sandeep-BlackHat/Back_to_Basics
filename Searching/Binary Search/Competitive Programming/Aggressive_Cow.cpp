#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, C;
	cout<<"Enter Number of Stalls: ";
	cin>>N;
	cout<<"Enter Number of Enter the number of postions: ";
	cin>>C;
	int a[N];
	cout<<"\nEnter Elements of Array: \n";
	for(int i=0; i<N; i++){
		cin>>a[i];
	}
	
	sort(a,a + N);
	int lb = 1;
	int ub = 1e9;
	int ans = 0;
	while(lb <= ub){
		int mid = (lb + ub) / 2;
		int cow = 1; //because one cow will be sitting at 1st position everytime.
		int prev = a[0];
		for(int i=1; i<N; i++){
			if(a[i]-prev >= mid){
				cow++;
				prev = a[i];
				if(C == cow){
					break;
				}
			}
		}
		if(cow == C){
			ans = mid;
			lb = mid + 1;
		}
		else{
			ub = mid - 1;
		}
	}
	cout<<"\nThe Largest Minimum Distance: "<<ans<<endl;
	
	return 0;
}
