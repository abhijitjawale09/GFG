//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
        int sum1 = 0;
        int sum2 = 0;
        int min = INT_MAX;
        for(int i = 0 ; i< n ;i++){
            if(min > a[i]){
                min = a[i];
            }
        }
        for(int i =0 ; i < n/2 ; i++){
          sum1 += a[i];
          sum2 += a[i + (n/2)];
        }
        // if(sum1 < sum2){
        //   a[n] += min;
        // }else if(sum1 > sum2){
        //   a[0] += min;
        // }
       return abs(sum1 - sum2); 
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends