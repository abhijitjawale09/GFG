//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int check(string a,string b);
int main(){
    int t;
    cin>>t;
    while(t--)
    {
       string a, b;
    cin >> a >> b;
    cout<<check(a,b)<<'\n';


    }

    return 0;
}

// } Driver Code Ends


int check(string a,string b){
    //code
   a.size() < b.size()
        ? a.insert( 0, b.size() - a.size(), '0' )
        : b.insert( 0, a.size() - b.size(), '0' );
    for ( size_t i{}; i < a.size(); ++i )
        if      ( a[ i ] < b[ i ] ) return 1;
        else if ( a[ i ] > b[ i ] ) return 2;
    return 3;
    
}