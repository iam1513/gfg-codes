//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        int maxe = INT_MIN;
    
        // Find the maximum element in the array
        for(int i = 0; i < n; i++) {
            if (arr[i] > maxe) {
                maxe = arr[i];
            }
        }
    
        // Initialize the vector with size 'maxe+1' and all elements set to 0
        vector<int> ans(maxe + 1, 0);
    
        // Count the occurrences of each element in the array
        for(int i = 0; i < n; i++) {
            ans[arr[i]]++;
        }
    
        // Store the duplicates in a separate vector
        vector<int> v;
    
        for(int i = 0; i <= maxe; i++) {
            if (ans[i] > 1) {
                v.push_back(i);
            }
        }
    
        // If no duplicates are found, push -1 into the vector
        if (v.empty()) {
            v.push_back(-1);
        }
    
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends