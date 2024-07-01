//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
  
  long long countStudents(int arr[],int mid,int n){
      long long cnt = 1;
      long long sum = 0;
      for(int i = 0; i < n; i++){
          if(sum+arr[i] <=  mid){
              sum+=arr[i];
          }
          else{
              sum = arr[i];
              cnt++;
          }
      }
      
      return cnt;
  }
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        if(m>n){
            return -1;
        }
        
        long long high = 0;
        long long low = 0;
        for(int i = 0; i < n; i++){
            high += arr[i];
            long long z = arr[i];
            low = max(low,z);
        }
        
        while(low<=high){
            long long mid = (low+high)/2;
            long long students = countStudents(arr,mid,n);
            if(students > m){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        
        return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends