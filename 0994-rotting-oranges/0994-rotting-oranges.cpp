// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         vector<vector<int>> visited = grid;
//         //making queue in which we will fill rotten oranges
//         queue<pair<int, int>> q;
//         int countFreshOrange = 0;
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (visited[i][j] == 2) {
//                     q.push({i, j});
//                 }
//                 if (visited[i][j] == 1) {
//                     countFreshOrange++;
//                 }
//             }
//         }
//         //q.empty() means there is no rotten orange in the grid and countFreshOrange = 0 means we will rotten the freshoranges in 0 mins
//         if (countFreshOrange == 0)
//             return 0;
//         if (q.empty())
//             return -1;
        
//         int minutes = -1;
//         // we will cover four directions i.e. up, down, left, right
//         vector<pair<int, int>> dirs = {{1, 0},{-1, 0},{0, -1},{0, 1}};
//         while (!q.empty()) {
//             int size = q.size();
//             while (size--) {
//                 auto [x, y] = q.front();
//                 q.pop();
//                 for (auto [dx, dy] : dirs) {
//                     int i = x + dx;
//                     int j = y + dy;
//                     if (i >= 0 && i < m && j >= 0 && j < n && visited[i][j] == 1) {
//                         visited[i][j] = 2;
//                         countFreshOrange--;
//                         q.push({i, j});
//                     }
//                 }
//             }
//             minutes++;
//         }
        
//         if (countFreshOrange == 0)
//             return minutes;
//         return -1;
//     }
// };
































// mthd - 2 
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row[4] = {-1,0,1,0};
        int col[4] = {0,1,0,-1};
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        
        //answer here
        int res=-1;
        
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({i,j});
                    // vis[i][j] = 1;
                }
                
            }
        }
        
        while(!q.empty())
        {
            int len = q.size();
            
            for(int i = 0 ;i<len ;i++)
            {
                auto p = q.front();
                q.pop();
                for(int i = 0;i<4;i++)
                {
                    int ii = p.first + row[i];
                    int jj = p.second + col[i];
                    if(ii >= 0 && ii < n && jj >=0 && jj < m && grid[ii][jj] == 1)
                        grid[ii][jj] = 2 , q.push({ii,jj});
                }
            }
            
            res++;
            
        }
        
        
        for(int i =0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return res >= 0 ? res : 0 ;
        
    }
};


























