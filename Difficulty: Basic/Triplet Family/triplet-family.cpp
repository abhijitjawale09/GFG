//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> findTriplet(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        vector<int> res = findTriplet(arr, n);
        if(res.size()!=3)cout<<"-1\n";
	    else
	    {
	        sort(res.begin(), res.end());
	        if(res[0]+res[1]==res[2])
	            cout<<"1\n";
	        else
	             cout<<"0\n";
	    }
    }
	return 0;
}

// } Driver Code Ends


// function should return the triplet
// in a vector container defined as "vector<int> result"
// use result.push_back() to insert elements in the 
// container
// if no such triplet is found, 
// return the container result as empty
// Note: container should be contain 3 elements or 0 elements only.
vector<int> findTriplet(int arr[], int n)
{
    unordered_map<int,int>mp;
    for( int i=0;i<n-2;i++){
        for( int j=i+1;j<n;j++){
            int c= arr[i]+arr[j];
            if(mp[c])
                return {arr[i],arr[j],arr[i]+arr[j]};
            mp[arr[j]]++;//increment the frequency of the element at index j in the map mp
        }
    }
    return {-1};
     // code here
}
