// class Solution {
// public:

//     bool solve(int n , vector<int> &nums , int sum,vector<vector<int>> &dp)
//     {
//         if(n == 0 && sum ==0 )return true;
//         if(n==0 && sum!=0 )return false;

//         if(dp[n][sum] != -1 )return dp[n][sum];

//         if(nums[n-1] <= sum)
//         {
//             return dp[n][sum] = solve(n-1,nums,sum-nums[n-1],dp) || solve(n-1,nums,sum,dp);
//         }
//         else{
//             return dp[n][sum] = solve(n-1,nums,sum,dp);
//         }
//     }

//     bool canPartition(vector<int>& nums) {
//         int sum = 0;
//         for(auto it : nums)
//         {
//             sum += it;
//         }
//         if(sum%2 ==1)return false;
//         vector<vector<int>> dp(nums.size()+1,vector<int>((sum/2)+1,-1));
//         return solve(nums.size(),nums,sum/2,dp);
//     }
// };



class Solution {
public:

    // bool solve(int n , vector<int> &nums , int sum,vector<vector<int>> &dp)
    // {
    //     if(n == 0 && sum ==0 )return true;
    //     if(n==0 && sum!=0 )return false;

    //     if(dp[n][sum] != -1 )return dp[n][sum];

    //     if(nums[n-1] <= sum)
    //     {
    //         return dp[n][sum] = solve(n-1,nums,sum-nums[n-1],dp) || solve(n-1,nums,sum,dp);
    //     }
    //     else{
    //         return dp[n][sum] = solve(n-1,nums,sum,dp);
    //     }
    // }


    // top-down approach

    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto it : nums)
        {
            sum += it;
        }
        if(sum%2 ==1)return false;

        sum /= 2;
        vector<vector<int>> dp(nums.size()+1,vector<int>(sum+1,0));

        for(int i =0;i<nums.size()+1;i++)
        {
            for(int j = 0;j<sum+1;j++)
            {
                if(j == 0)dp[i][j] = 0;
                if(i == 0)dp[i][j] = 0;
            }
        }
        dp[0][0] = 1;

        for(int i =1;i<nums.size()+1;i++)
        {
            for(int j =1;j<sum+1;j++)
            {
                if(nums[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        return dp[nums.size()][sum];

        // return solve(nums.size(),nums,sum/2,dp);
    }
};