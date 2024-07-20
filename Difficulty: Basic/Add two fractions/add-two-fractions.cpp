//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}

// } Driver Code Ends


/*You are required to complete this function*/
void addFraction( int a, int b, int c, int d ) {
    ( a *= d ) += b * c, b *= d, d = __gcd( a, b );
    cout << a / d << '/' << b / d << '\n';
}