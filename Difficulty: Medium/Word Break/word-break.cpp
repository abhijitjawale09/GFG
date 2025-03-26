//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
 struct TrieNode {
    TrieNode* children[26] = {nullptr};
    bool isEnd = false;
};

// Insert words into Trie
class Trie {
public:
    TrieNode* root;
    
    Trie() {
        root = new TrieNode();
    }
    
    void insert(const string &word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->children[idx]) {
                node->children[idx] = new TrieNode();
            }
            node = node->children[idx];
        }
        node->isEnd = true;
    }
};

// Word Break using Trie + BFS
bool wordBreak(string &s, vector<string> &dictionary) {
    Trie trie;
    for (const string &word : dictionary) {
        trie.insert(word);
    }
    
    int n = s.size();
    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(0);
    
    while (!q.empty()) {
        int start = q.front();
        q.pop();
        
        if (visited[start]) continue;
        visited[start] = true;
        
        TrieNode* node = trie.root;
        for (int i = start; i < n; i++) {
            int idx = s[i] - 'a';
            if (!node->children[idx]) break;
            
            node = node->children[idx];
            if (node->isEnd) {
                q.push(i + 1);
                if (i + 1 == n) return true; // Found a valid partition
            }
        }
    }
    return false;
}
};


//{ Driver Code Starts.

vector<string> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<string> res;
    while (ss >> str) {
        res.push_back(str);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        cin.ignore();
        vector<string> dictionary = inputLine();

        Solution ob;
        if (ob.wordBreak(s, dictionary)) {
            cout << "true\n";
        } else
            cout << "false\n";
        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends