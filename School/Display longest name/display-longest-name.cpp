//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    string longest(int n, vector<string> &names) {
        // code here
        string longeststring = "";
        int sizeofstring = 0;
        int sizeofarray = names.size();
        for (int i = 0; i < n; i++) {
            if (names[i].length() > sizeofstring) {
                sizeofstring = names[i].size();
                longeststring = names[i];
            }
        }
        return longeststring;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<string> names(n);
        Array::input(names,n);
        
        Solution obj;
        string res = obj.longest(n, names);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends