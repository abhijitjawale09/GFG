//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}

// } Driver Code Ends




string ReverseSort(string str){
    //complete the function here
    // int N = str.size();
    // int left  = 0 ;
    // int right = N - 1 ;
    // while(left < right){
    //     swap(str[left] , str[right]);
    //     left++;
    //     right--;
       
    // }
     std::sort(str.begin(), str.end(), std::greater<char>());
     
    return str;
}