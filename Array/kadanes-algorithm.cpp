// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution {
  public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {

      // Your code here
      long long sum = 0;
      long long maxSum = arr[0];

      for (int i = 0; i < n; i++) {
        sum+=arr[i];
        
        if (maxSum < sum) {
          maxSum = sum;
        }
        if(sum<arr[i] && maxSum<0 && arr[i]<0){
            sum=arr[i];
        }
        else if(sum<0){
            sum=0;
        }

      }
        return maxSum;
     }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends