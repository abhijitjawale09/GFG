//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
    vector<int> a(26,0);
    vector<int> b(26,0);
    for(char c : str1){
        a[c - 'a']++;
    }
    for(char c : str2){
        b[c - 'a']++;
    }
    int ans = 0;
    for(int i = 0 ; i < 26 ; i++){
        ans += abs(a[i] - b[i]);
    }
    return ans;
    

}