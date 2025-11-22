class Solution {
  public:
    void dfs(int u, int &edges , int &vertices , vector<int>& vis , vector<vector<int>> &adj) {
        vis[u] = 1;
        edges += adj[u].size();   // degree sum
        vertices++;
        
        for(int v : adj[u]) {
            if(!vis[v]) {
                dfs(v , edges, vertices , vis , adj);
            }
        }
    }
    
    int minConnect(int V, vector<vector<int>>& inputEdges) {

        vector<vector<int>> adj(V);
        vector<int> vis(V, 0);
        
        // Build graph
        for(auto it : inputEdges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        int extraedges = 0 , numcom = 0;

        for(int i = 0 ; i < V; i++) {

            if(!vis[i]) {
                int edges = 0;
                int vertices = 0;

                dfs(i , edges , vertices , vis , adj);

                edges /= 2;   // because counted both sides

                int mn = vertices - 1;  // minimum edges required
                extraedges += (edges - mn);

                numcom++;
            }
        }
        
        // To connect numcom components, we need numcom - 1 edges
        int needed = numcom - 1;

        if(extraedges >= needed) return needed;
        return -1;    // not enough extra edges
    }
};
