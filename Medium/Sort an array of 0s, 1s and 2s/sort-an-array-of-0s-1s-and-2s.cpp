//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                cnt0++;
            }
            
            else if(arr[i] == 1){
                cnt1++;
            }
            
            else{
                cnt2++;
            }
        }
        
        int ptr1 = 0; int ptr2 = n - cnt2;
        while(ptr2<n && ptr1 <=ptr2){
            if(arr[ptr1] == 2 && arr[ptr2]!=2){
                swap(arr[ptr2],arr[ptr1]);
                ptr2++;
                ptr1++;
            }
            else if(arr[ptr2] == 2){
                ptr2++;
            }
            else{
            ptr1++;
            }
        }
        
        int ptr3= 0; int ptr4= n - cnt2 - cnt1;
        
        while(ptr4 < n - cnt2  && ptr3 < ptr4){
            if(arr[ptr3] == 1 && arr[ptr4]!=1){
                swap(arr[ptr4],arr[ptr3]);
                ptr4++;
                ptr3++;
            }
            
            else if(arr[ptr4] == 1){
                ptr4++;
            }
            
            else{
            ptr3++;
            }
        }
        
    }
    
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends