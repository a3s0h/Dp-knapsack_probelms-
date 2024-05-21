class Solution {
public:
    
    void solve(int ind ,vector<int> &temp, vector<vector<int>> &res , vector<int> &nums)
    {
        if(ind == nums.size())
        {
            res.push_back(temp);
            return ;

        }
        
        temp.push_back(nums[ind]);
        solve(ind+1 , temp,res,nums);
        temp.pop_back();
        solve(ind+1 , temp ,res , nums);
                    
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        solve(0 ,temp , res , nums);
        return res;
    }
};