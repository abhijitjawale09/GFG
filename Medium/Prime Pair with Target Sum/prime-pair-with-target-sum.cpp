//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    void sieve(vector<bool>& isPrime, int n) {
    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not primes
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

vector<int> getPrimes(int n) {
    vector<bool> isPrime(n + 1, true);
    sieve(isPrime, n);

    for (int i = 2; i <= n / 2; ++i) {
        if (isPrime[i] && isPrime[n - i]) {
            return {i, n - i};
        }
    }
    return {-1, -1};
    }// In case no such pair is found
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends