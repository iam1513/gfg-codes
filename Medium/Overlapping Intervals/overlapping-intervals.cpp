//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>> ans;

        if (intervals.empty()) {
            return ans;
        }

        sort(intervals.begin(), intervals.end());

        int ptr1 = intervals[0][0];
        int ptr2 = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            int currentStart = intervals[i][0];
            int currentEnd = intervals[i][1];

            if (currentStart <= ptr2) {
                // Merge intervals
                ptr2 = max(ptr2, currentEnd);
            } else {
                // Add the merged interval to the result and update ptrs
                ans.push_back({ptr1, ptr2});
                ptr1 = currentStart;
                ptr2 = currentEnd;
            }
        }

        // Adding last interval
        ans.push_back({ptr1, ptr2});

        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends