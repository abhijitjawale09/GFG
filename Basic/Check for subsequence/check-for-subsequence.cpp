//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
        int i = 0 ;
        int j = 0 ;
        int count = 0;
        while(i < A.size() && j < B.size() ) { 
            if(A[i] == B[j]){
                i++;
                j++;
                count++;
            }else{
                j++;
                
            }
            if(count == A.size()){
                return true;
                
            }
            
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 

// } Driver Code Ends