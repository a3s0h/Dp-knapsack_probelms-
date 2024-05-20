class Solution {
public:
    int solve(int ind , vector<int> &nums, int ans)
    {
        if(ind == nums.size())
            return ans;
        
        return solve(ind+1 , nums , ans ^nums[ind]) + solve(ind+1 , nums, ans);
    }
    int subsetXORSum(vector<int>& nums) {
        int res = 0;
        
        return solve(0 , nums , 0);
    }
};