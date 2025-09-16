#include <bits/stdc++.h>
using namespace std;

long long intPow(long long a, long long b) {
    if (b < 0) return 0; // undefined for integer result; adjust if needed
    long long r = 1;
    while (b) {
        if (b & 1) r = r * a;
        a = a * a;
        b >>= 1;
    }
    return r;
}

class Solution {
public:
    int evaluatePostfix(vector<string>& arr) {
        stack<long long> st;
        for (auto &tok : arr) {
            if (tok == "+" || tok == "-" || tok == "*" || tok == "/" || tok == "^") {
                long long b = st.top(); st.pop(); // second operand
                long long a = st.top(); st.pop(); // first operand
                long long res = 0;

                if (tok == "+") res = a + b;
                else if (tok == "-") res = a - b;
                else if (tok == "*") res = a * b;
                else if (tok == "/") {
                    // handle division so that it floors toward -infinity
                    if (b == 0) res = 0; // or handle divide-by-zero per problem spec
                    else {
                        long long q = a / b;         // C++ truncates toward 0
                        long long rem = a % b;       // remainder (sign follows numerator)
                        if (rem != 0 && ((a < 0) ^ (b < 0))) --q; // if signs differ, floor by subtracting 1
                        res = q;
                    }
                }
                else if (tok == "^") {
                    res = intPow(a, b); // integer exponent
                }

                st.push(res);
            } else {
                st.push(stoll(tok)); // supports negative & multi-digit numbers
            }
        }
        return (int)st.top();
    }
};
