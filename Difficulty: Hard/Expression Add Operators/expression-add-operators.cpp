class Solution {
public:
    set<string> ans;  // Using set to automatically maintain lexicographical order
    
    // DFS function to generate all possible expressions
    // idx: current position in the string
    // s: original input string of digits
    // expr: current expression being built
    // calc: current calculated value of the expression
    // tail: last operand used (important for multiplication precedence)
    // target: the value we're trying to reach
    void help(int idx, const string& s, string expr, long long calc, long long tail, int target) {
        // Base case: reached end of string
        if (idx == s.length()) {
            // If current calculation matches target, add to results
            if (calc == target) {
                ans.insert(expr);
            }
            return;
        }
        
        long long num = 0;        // Current number being formed
        string newS = "";         // String representation of current number
        
        // Try forming numbers of different lengths starting from current index
        for (int i = idx; i < s.length(); ++i) {
            newS += s[i];  // Append next digit to current number string
            num = num * 10 + (s[i] - '0');  // Convert string to numerical value
            
            // Prevent numbers with leading zeros (except single zero)
            // If we have more than one digit and first digit is '0', skip
            if (newS.size() > 1 && s[idx] == '0') continue;
            
            if (idx == 0) {
                // First number - no operator before it
                // Start building expression with this number
                help(i + 1, s, newS, num, num, target);
            } else {
                // Try ADDITION operator
                // New calculation = current calculation + new number
                // Tail becomes the new number (for future multiplications)
                help(i + 1, s, expr + "+" + newS, calc + num, num, target);
                
                // Try SUBTRACTION operator  
                // New calculation = current calculation - new number
                // Tail becomes negative of new number
                help(i + 1, s, expr + "-" + newS, calc - num, -num, target);
                
                // Try MULTIPLICATION operator
                // Key insight: To handle operator precedence, we undo the last operation
                // and then multiply the last operand with current number
                // Formula: (current_calc - last_tail) + (last_tail * current_number)
                // Tail becomes (last_tail * current_number) for future operations
                help(i + 1, s, expr + "*" + newS, calc - tail + tail * num, tail * num, target);
            }
        }
    }
    
    vector<string> findExpr(string& s, int target) {
        // Edge case: empty string or single zero with non-zero target
        if (s.empty() || (s == "0" && target != 0)) return {};
        
        // Start DFS with empty expression, initial calculation 0, initial tail 0
        help(0, s, "", 0, 0, target);
        
        // Convert set to vector for return (automatically sorted)
        return vector<string>(ans.begin(), ans.end());
    }
};