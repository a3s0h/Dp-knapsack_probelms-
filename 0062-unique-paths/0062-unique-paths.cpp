#include <vector>

class Solution {
public:
    int solve(int m , int n,vector<vector<int>> &dp)
    {
         if(m==0 && n==0)return 1;
        if(m<0 || n<0)return 0;
        if(dp[m][n] != -1 )return dp[m][n];
        return dp[m][n]= solve(m-1,n,dp) + solve(m,n-1,dp);
    }
    int uniquePaths(int m, int n) {
        
        // Create a 2D vector to store the number of unique paths at each cell
//         vector<vector<int>> dp(n, vector<int>(m, 0));

//         // Initialize the first row and column to 1 since there's only one way to reach each cell in the first row and column
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (i == 0 || j == 0)
//                     dp[i][j] = 1;
//                 else{
                    
//                     dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//                 }
//             }
//         }

//         // The bottom-right cell contains the total number of unique paths
//         return dp[n - 1][m - 1];
        
        vector<vector<int>> dp(m,vector<int> (n,-1));
       return solve(m-1,n-1,dp);
        
        
    }
};
