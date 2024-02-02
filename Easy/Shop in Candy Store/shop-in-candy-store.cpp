//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        vector<int> ans;
        
        sort(candies, candies + N);
        
        // int r = (N + K - 1) / K;  // Calculate the number of groups
        
        int mine = 0;
        int maxe = 0;
        int a = N-1;
        
        for (int i = 0; i <= a; i++) {
            mine += candies[i];
            a-=K;
        }
        
        a  = 0;
        for (int i = N - 1; i >= a ; i--) {
            maxe += candies[i];
            a+=K;
        }
        
        ans.push_back(mine);
        ans.push_back(maxe);
        
        return ans;
    }

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends