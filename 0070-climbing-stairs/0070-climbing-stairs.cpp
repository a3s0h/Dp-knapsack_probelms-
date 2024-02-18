// class Solution {
// public:

//     int steps(int n,vector<int> &dp)
//     {
//         if(n == 0)
//         {
//             return 1;
//         }
//         if(dp[n] != -1)return dp[n];
//         return dp[n] = steps(n-1,dp) + ((n-2) >= 0 ? steps(n-2,dp) : 0);
//     }

//     int climbStairs(int n) {
//         int cnt = 0;
//         vector<int> dp(n+1,-1);
//         cnt = steps(n,dp);
//         return cnt;
//     }
// };
// dp 

class Solution {
public:
    int solve(int n,vector<int> &dp)
    {
        if(n <= 1)
            return 1;
        
        if(dp[n-1] != -1)return dp[n-1];
        
        int oneStep = solve(n-1,dp);
        int twoStep = 0;
        if(n-2 >=0 )
            twoStep = solve(n-2,dp);
        return dp[n-1] = oneStep + twoStep;
    }
    
    int climbStairs(int n) {
        vector<int> dp(n,-1);
        return solve(n,dp);

    }
};



// top down approach

// class Solution {
// public:
//     int climbStairs(int n) {
//         vector<vector<int>> vp(n+1,vector<int> (n+1,0));

        
//         for(int i =0;i<=n;i++)
//         {
//             for(int j =0;j<=n;j++)
//             {
//                 if(i==0)
//                 {
//                     if(j==1 || j == 2)vp[i][j] = i;

//                 }
//                 if(j==0)vp[i][j] = i;
//             }
            
//         }
//         vp[0][0] = 1;

//         for(int i =1;i<=n;i++)
//         {
//             for(int j = 1;j<=n;j++)
//             {
//                 if(i-1 <= j)
//                     vp[i][j] = vp[i-1][j] + vp[i][j-(i-1)];
//                 else
//                     vp[i][j] = vp[i-1][j];
//             }
//         }
//         return vp[n][n];
//     }
// };