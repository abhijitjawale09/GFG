//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int isSquare(string S);

int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << isSquare(S) << endl;
    }
return 0;
}
// } Driver Code Ends


int isSquare(string S){
    //complete the function here
    int add =0;
    for(int i = 0 ; i< S.size() ;i++){
        add += S[i];
    }
    int sq = sqrt(add);
    if(sq * sq == add) return 1;
    else return 0;
}