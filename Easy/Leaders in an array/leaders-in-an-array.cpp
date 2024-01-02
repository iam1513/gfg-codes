//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
        vector<int> ans;
        int maxe = a[n-1];
        ans.push_back(maxe);
        
        for(int i = n - 2; i >= 0; i--){
            if(a[i] >= maxe){
                maxe = a[i];
                ans.push_back(maxe);
            }
        }
        
        int ptr1 = 0; int ptr2 = ans.size()-1;
        while(ptr1<ptr2){
            swap(ans[ptr1],ans[ptr2]);
            ptr1++;
            ptr2--;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends