class Solution {
public:

    void solve(int ind , vector<vector<int>> &res,vector<int> &nums)
    {
        if(ind == nums.size()-1)
        {
            res.push_back(nums);
            return ;
        }
        
        for(int i = ind;i<nums.size();i++)
        {
            // if(ind != i)
            // {
                swap(nums[ind],nums[i]);
                // res.push_back(nums);
                solve(ind+1,res,nums);
                swap(nums[ind],nums[i]);
            // }
            
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res ;
        // res.push_back(nums);
        solve(0,res,nums);
        return res;
    }
};