//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
   
bool hasUniqueDigits(int num) {
    bool digitSeen[10] = {false}; // Boolean array to check if digit is seen
    while (num > 0) {
        int digit = num % 10;
        if (digitSeen[digit]) {
            return false;
        }
        digitSeen[digit] = true;
        num /= 10;
    }
    return true;
}

vector<int> uniqueNumbers(int L, int R) {
    vector<int> result;
    for (int num = L; num <= R; ++num) {
        if (hasUniqueDigits(num)) {
            result.push_back(num);
        }
    }
    return result;
}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends