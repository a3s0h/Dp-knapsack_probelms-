class Solution {
    int solve(int i ,int j ,vector<vector<int>> &nums, vector<vector<int>> &dp) 
    {
        if(j<0 || j>= nums[0].size()) return 1e8;
        
        if(i==0)return nums[0][j];
        if(dp[i][j] != -1 )return dp[i][j];
        
        long long int up = nums[i][j] + solve(i-1,j,nums,dp);
        long long int ld = nums[i][j] + solve(i-1,j-1,nums,dp);
        long long int rd = nums[i][j] + solve(i-1,j+1,nums,dp);
        
        return dp[i][j] = min(up, min(ld,rd));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        // int mini = 1e8;
        // for(int i =0 ;i<matrix[0].size();i++)
        // {
        //     mini = min(mini , solve(matrix.size()-1 , i , matrix,dp));
        // }
        // return mini;
        
        for(int j = 0;j<m;j++) dp[0][j] = matrix[0][j];
        
        for(int i =1;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                int up = matrix[i][j] + dp[i-1][j];
                int ld = j-1>=0 ?  matrix[i][j] + dp[i-1][j-1] : 1e8;
                int rd = j+1<m ?  matrix[i][j] + dp[i-1][j+1] : 1e8;
                dp[i][j] = min(up,min(ld,rd));
            }
        }
        int mini = 1e8;
        for(int i =0;i<m;i++)mini = min(mini , dp[n-1][i]);
        return mini;
        
    }
};