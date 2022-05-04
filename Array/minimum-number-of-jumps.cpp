// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int i=0;
        int ans=0;
        
        while(i<n-1){
            int j=0;
            int currentBestIndex=0;
            ans++;
            if(i+arr[i]>=n-1){
                break;
            }
            for(int k=i+1;k<=arr[i]+i && k<n;k++){
                if(j<k+arr[k]){
                    j=k+arr[k];
                    currentBestIndex=k;
                }
                
            }
            if(currentBestIndex==0){
                return -1;
            }
            i=currentBestIndex;
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends