//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        // GREEDY
        int currReach = 0;
        int nextReach = 0;
        int jumps = 0;
        for(int i = 0; i < n - 1; i++){
            
            nextReach = max(nextReach,i+arr[i]);
            // When we will reach the nextReach index , but then wont find value greater, 
            // we cant go any further
            if(nextReach == i) return -1;
            if(i == currReach){
                currReach = nextReach;
                jumps++;
            }
        }
        
        return jumps;
    }
};


//{ Driver Code Starts.

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