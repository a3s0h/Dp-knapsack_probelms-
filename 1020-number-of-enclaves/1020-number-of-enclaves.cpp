class Solution {
public:
    
    vector<pair<int,int>> dir = {{0,-1}, {-1,0}, {0,1}, {1,0}};
    
    void dfs(int row , int col , vector<vector<int>> &board , vector<vector<int>> &vis)
    {
        vis[row][col] = 1;
        
        for(auto it : dir)
        {
            int x = row - it.first;
            int y = col - it.second;
            if(x >= 0 && x < board.size() && y < board[0].size() && y >= 0 && board[x][y] == 1 && !vis[x][y] )
            {
                dfs(x,y,board,vis);
            }
        }
        
    }
    
    int numEnclaves(vector<vector<int>>& board) {
         int n = board.size();
        int m = board[0].size();
        
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        // checking left boundary
        for(int i = 0 ;i< n ;i++)
        {
            if(board[i][0] == 1 && !vis[i][0])
                dfs(i,0,board,vis);
        }
        
        // checking top boundary
        for(int i = 0 ;i< m ;i++)
        {
            if(board[0][i] == 1 && !vis[0][i])
                dfs(0,i,board,vis);
        }
            
        // checking right boundary
        for(int i = 0 ;i< n ;i++)
        {
            if(board[i][m-1] == 1 && !vis[i][m-1])
                dfs(i,m-1,board,vis);
        }
        
        // checking bottom boundary
        for(int i = 0 ;i< m ;i++)
        {
            if(board[n-1][i] == 1 && !vis[n-1][i])
                dfs(n-1,i,board,vis);
        }
        
        int res = 0 ;
        
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(board[i][j] == 1 && vis[i][j] != 1)res++;
            }
        }
        
        return res;
    }
};