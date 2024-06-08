//{ Driver Code Starts
#include <iostream>
using namespace std;

void printPattern(string s);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	printPattern(s);
	cout<<endl;
	
}
	
	return 0;
}
// } Driver Code Ends


/*method prints the given pattern in a single line */
void printPattern(string s)
{
   //Your code here
   int n = s.size();
   int mid = n /2;
   string ans = "";
   for(int i= mid ; i<n; i++){
       ans +=s[i];
       cout<<ans<<"$"<<" ";
   }
   for(int i = 0 ; i<mid ;i++){
       ans += s[i];
       cout<<ans<<"$"<<" ";
   }

    
}
