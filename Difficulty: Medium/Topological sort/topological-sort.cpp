//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   void DFS(vector<int> adj[], int u, vector<bool> &visited, stack<int> &st) {
        visited[u] = true;

        for (int &v : adj[u]) {
            if (!visited[v]) {
                DFS(adj, v, visited, st);
            }
        }

        st.push(u);
    }

public:
    vector<int> topoSort(int V, vector<vector<int>> &edges) {
        vector<int> adj[V];

        // Construct adjacency list from edges
        for (auto &edge : edges) {
            adj[edge[0]].push_back(edge[1]);
        }

        vector<bool> visited(V, false);
        stack<int> st;

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                DFS(adj, i, visited, st);
            }
        }

        vector<int> result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        return result;
    }
};

// Function to validate the topological order
bool check(int V, vector<vector<int>> &edges, vector<int> &res) {
    vector<int> pos(V);
    for (int i = 0; i < V; i++)
        pos[res[i]] = i;

    for (auto &edge : edges) {
        if (pos[edge[0]] > pos[edge[1]]) return false;
    }

    return true;
}



//{ Driver Code Starts.

int check(int V, vector<int> &res, vector<vector<int>> adj) {

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(V);
        vector<vector<int>> edges;

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            edges.push_back({u, v});
        }

        Solution obj;
        vector<int> res = obj.topoSort(V, edges);
        bool ans = check(V, res, adj);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends