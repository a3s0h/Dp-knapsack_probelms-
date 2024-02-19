class Solution {
public:

    int solve(int idx , int n ,vector<int> &nums ,vector<int> &dp)
    {
        if(idx > n)return 0;
        if(idx == n)return nums[idx];
        
        if(dp[idx]!=-1) return dp[idx];
        
        int one = nums[idx] + solve(idx+2,n,nums,dp);
        int sec = solve(idx+1,n,nums,dp);
        return dp[idx] = max(one,sec);
    }

    int rob(vector<int>& nums) {
        if(nums.size() < 3)
        {
            return *max_element(nums.begin(),nums.end());
        }
        vector<int> dp(nums.size(),-1);
        int case1 = solve(1 , nums.size()-1 ,nums , dp);
        // cout<<"ans1 : "<<ans1<<endl;
        vector<int> dp1(nums.size(),-1);
        return max( case1, solve(0,nums.size()-2,nums,dp1));
        
        
        
        
    }
};

// - - - - - 