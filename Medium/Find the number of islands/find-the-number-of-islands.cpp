//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int rows = grid.size();
        int cols = grid[0].size();
        int cnt = 0;
        vector<vector<int>> dir= {{-1, 0}, {1, 0}, {0, -1}, {0, 1},{-1,-1},{1,-1},{-1,1},{1,1}};
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j] = '0';
                    while(!q.empty()){
                        auto cell = q.front();
                        q.pop();
                        int a = cell.first;
                        int b = cell.second;
                        for(int d = 0; d < 8; d++){
                            int nr = a + dir[d][0];
                            int nc = b + dir[d][1];
                            if(nr < 0 || nc < 0 || nc >= cols || nr >= rows) continue;
                            if(grid[nr][nc] == '0') continue;
                            q.push({nr,nc});
                            grid[nr][nc] = '0';
                        }
                        
                    }
                }
            }
        }
        return cnt;
    }
    
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends