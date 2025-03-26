//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    // void solve(vector<vector<int>> &adj , int i ,  queue<int>& que , vector<bool>& visi ,  vector<int>& result)  {
    //     while(!que.empty()) {
    //         int it = que.top();
            
    //     }
    // }
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int> result;
        vector<bool> visi(n , false);
        queue<int> que;
        
        
        que.push(0);
        visi[0] = true;
        
        while(!que.empty()) {
            int node = que.front();
            que.pop();
            result.push_back(node);
            
            for(auto it : adj[node]) {
                if(!visi[it]) {
                    visi[it] = 1;
                    que.push(it);
                }
            }
        }
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        // Now using vector of vectors instead of array of vectors
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // For undirected graph, add both u->v and v->u
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends