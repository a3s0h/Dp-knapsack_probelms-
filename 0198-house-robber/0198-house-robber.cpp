class Solution {
public:
    
//     int solve(int idx , vector<int> &nums,vector<int> &dp)
//     {
//        if(idx == 0)
//        {
//             return nums[idx];
//        }
//         if(idx < 0)return 0;
        
//         if(dp[idx] != -1)return dp[idx];
        
        
//         int one = nums[idx] + solve(idx-2,nums,dp);
//         int sec = solve(idx-1,nums,dp);
        
//         return dp[idx] =  max(one,sec);
        
//     }
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        // return solve(nums.size()-1,nums,dp);
        int n = nums.size();
        
        if(n < 3)
        {
            return *max_element(nums.begin(),nums.end());
        }
        else{
            dp[0]=nums[0];
            dp[1] = nums[1];
            dp[2] = nums[2]+dp[0];

            for(int i = 3;i<n;i++)
            {
                dp[i] = max(nums[i] + dp[i-2] , nums[i] + dp[i-3]);
            }
            return *max_element(dp.begin(), dp.end());
        }
        
        
        
        
    }
};