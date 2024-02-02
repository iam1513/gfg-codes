//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int n = S.size();
        
        int b = n - 1;
        string str = "";
        string st = "";
        
        while(b>-2){
            if(S[b] == '.' ){
                reverse(st.begin(), st.end());
                str+=st;
                str+='.';
                st = "";
                b--;
            }
            
            else if(b==-1 ){
                reverse(st.begin(), st.end());
                str+=st;
                return str;
            }
            
            else{
                st+=S[b];
                b--;
            }
        }
        
        return "";
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends