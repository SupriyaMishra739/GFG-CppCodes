class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        vector<int> ans;
        int V= adj.size();
        vector<bool> visited(V,0);  //visited array
        
        queue<int> q;
        
        q.push(0);
        visited[0]=1;
        int node;
        
        while(!q.empty()){
            node= q.front();
            q.pop();
            ans.push_back(node);
             
             
             for(int j=0;j<adj[node].size();j++){
                 if(!visited[adj[node][j]]){
                     q.push(adj[node][j]);
                     visited[adj[node][j]]=1;
                 }
                 
             }
             
            
        }
        return ans;
       
    }
};