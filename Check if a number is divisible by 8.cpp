//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        int n=s.size();
        string temp="";
        if(n>=3){
            temp[0]=s[n-3];
        }
        else{
            temp[0]='0';
        }
        if(n>=2){
                temp[1]=s[n-2];
        }
        else{
            temp[1]='0';
        }
        temp[2]=s[n-1];
        int ans=stoi(temp);
        if(ans%8==0){
            return 1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
