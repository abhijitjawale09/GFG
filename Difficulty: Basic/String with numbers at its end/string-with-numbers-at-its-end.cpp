//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
		
	int isSame(string s)
	{
	    // Your code goes her
	    
	   int n = s.size();
    int i = n - 1;

    // Find the start of the number at the end of the string
    while (i >= 0 && std::isdigit(s[i])) {
        i--;
    }

    // Extract the number as a substring
    std::string number_str = s.substr(i + 1);
    
    // If the number is empty, return 0 (invalid input case)
    if (number_str.empty()) {
        return 0;
    }
    
    // Compare lengths directly
    int length_of_string = i + 1;
    
    // Convert the number string to an integer if it is within a valid range
    try {
        int number = std::stoi(number_str);
        if (length_of_string == number) {
            return 1;
        } else {
            return 0;
        }
    } catch (const std::out_of_range& e) {
        // If num
	    return 0;
    }
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isSame(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends