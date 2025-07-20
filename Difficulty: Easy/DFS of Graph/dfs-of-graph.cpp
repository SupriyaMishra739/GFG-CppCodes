class Solution {
  public:
    void DFS(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<int> &ans) {
        visited[node] = 1;
        ans.push_back(node);
        
        for (int j = 0; j < adj[node].size(); j++) {
            if (!visited[adj[node][j]]) {
                DFS(adj[node][j], adj, visited, ans);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size(); // number of nodes
        vector<int> ans;
        vector<bool> visited(V, 0);
        DFS(0, adj, visited, ans);
        return ans;
    }
};
