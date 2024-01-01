//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(std::vector<int> arr, int n, long long s){
        
        vector<int> ans(2, -1);
        int start = 0, end = 0, sum = 0;
        
        if(n==1 && s == arr[0]){
            ans[0] = start + 1;
            ans[1] = start + 1;
            return ans;
        }
        
        if(s == 0){
            ans.pop_back();
            return ans;
        }
    
        while (end <= n) {
            if (sum == s) {
                ans[0] = start + 1;
                ans[1] = end;
                return ans;
            }
    
            else if (sum < s) {
                if (end < n)
                    sum += arr[end];
                    end++;
            } 
            
            else {
                sum -= arr[start];
                start++;
            }
        }
    
        ans.pop_back();
        return ans;
    }
    
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends