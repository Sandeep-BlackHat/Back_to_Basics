#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Solution{
    public:
    int kadane(int arr[], int num) {
        int curr_sum = 0;
        int max_sum = INT_MIN;
        
        for(int i=0;i<num;i++) {
            curr_sum += arr[i];
            
            max_sum = max(max_sum ,curr_sum);
            
            if(curr_sum <0) {
                curr_sum = 0;
            }
        }
        return max_sum;
    }
    
    int circularSubarraySum(int arr[], int num){    
        int  ans1 = kadane(arr, num);
        
        if(ans1 < 0) {
            return ans1;
        }
        
        int sum = 0;
        for(int i=0;i<num;i++) {
            sum += arr[i];
            arr[i] = -arr[i];
        }
        
        int ans2 = sum + kadane(arr, num);
        
        return max(ans1 ,ans2);
    }
};

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}