//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int sundays = S/7;
        int buy_days = S - sundays;
        int max_food_req = S*M;
        int cnt = 0;
        
        if(max_food_req%N == 0){
           cnt = max_food_req/N; 
        }
        else{
            cnt = max_food_req/N + 1; 
        }
        
        if(cnt<=buy_days){
            return cnt;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends