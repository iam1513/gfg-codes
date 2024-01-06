//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(int i = 0; i < x.size(); i++){
            char ch = x[i];
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            } 
            else{
                if(st.empty()){
                    return false;
                }

                char openBracket = st.top();

                st.pop();

                if ((ch == ')' && openBracket != '(') ||
                    (ch == '}' && openBracket != '{') ||
                    (ch == ']' && openBracket != '[')) {
                    return false; // Mismatched closing bracket.
                }
        }
        }
        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends