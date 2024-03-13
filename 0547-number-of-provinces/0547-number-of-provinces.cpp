class Solution {
public:

    void dfs(int node , vector<vector<int>> &adj , vector<int> &vis)
    {
        vis[node] = 1;
        if(node == adj.size())
            return ;
        
        for(int i = 0; i < adj[node].size(); i++) {
    if(adj[node][i] == 1) {
        if(vis[i] == 0) {
            dfs(i, adj, vis);
        }
    }
}

    }
        
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int cnt = 0;
        int n = isConnected.size();
        // int vis[n] = {0};
        vector<int> vis(n,0);
        for(int i =0;i<n;i++)
        {
            if(vis[i] == 0)
            {
                cnt++;
                cout<<"going for : "<<i<<endl;
                dfs(i,isConnected , vis);
            }
        }
        
        return cnt;
    }
};