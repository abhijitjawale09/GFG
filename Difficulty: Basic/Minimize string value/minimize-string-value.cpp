//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int minValue(string S, int K)
	{
	    // Your code goes here
	   vector<int> freq(26, 0);
    for (char ch : S) {
        freq[ch - 'a']++;
    }
    
    // Step 2: Use a max-heap to store frequencies
    priority_queue<int> maxHeap;
    for (int f : freq) {
        if (f > 0) {
            maxHeap.push(f);
        }
    }
    
    // Step 3: Remove k characters by reducing the highest frequencies
    while (K > 0 && !maxHeap.empty()) {
        int top = maxHeap.top();
        maxHeap.pop();
        top--;
        K--;
        if (top > 0) {
            maxHeap.push(top);
        }
    }
    
    // Step 4: Calculate the new value of the string
    int result = 0;
    while (!maxHeap.empty()) {
        int f = maxHeap.top();
        maxHeap.pop();
        result += f * f;
    }
    
    return result;
	}
};

//{ Driver Code Starts.

int main() 
{
   
   
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		int k;
   		cin >> k;
        Solution ob;

   		cout << ob.minValue(s, k);

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends