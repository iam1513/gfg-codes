//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int n, vector<int> &S, vector<int> &F) {
    vector<vector<int>> v;

    for (int i = 0; i < n; i++) {
        vector<int> a = {S[i], F[i], i + 1};
        v.push_back(a);
    }

    sort(v.begin(), v.end(), [](const vector<int> &a, const vector<int> &b) {
        return a[1] < b[1];
    });

    vector<int> ans;
    ans.push_back(v[0][2]);
    int sec = v[0][1];

    for (int i = 1; i < n; i++) {
        if (v[i][0] > sec) {
            ans.push_back(v[i][2]);
            sec = v[i][1];
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends