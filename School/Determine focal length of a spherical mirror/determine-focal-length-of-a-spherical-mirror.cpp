//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int findFocalLength(float R, string type){
	    //Code here
	     if (type == "concave") {
        return static_cast<int>(std::floor(R / 2.0));
    } else if (type == "convex") {
        return static_cast<int>(std::floor(-R / 2.0));
	}
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		float n;
		string type;
		cin >> type >> n;
		Solution ob;
		int ans = ob.findFocalLength(n, type);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends