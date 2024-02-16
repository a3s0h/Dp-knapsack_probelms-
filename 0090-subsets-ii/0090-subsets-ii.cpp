class Solution {
public:
    
    void solve(int ind , int n ,vector<int> &temp, vector<vector<int>> &res, vector<int> &nums)
    {
       
            res.push_back(temp);
       
        
        for(int i = ind ; i<n;i++)
        {
            if(i != ind && nums[i] == nums[i-1]) continue;
            temp.push_back(nums[i]);
            solve(i+1,n,temp,res,nums);
            temp.pop_back();
        }
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        // res.push_back(temp);
        solve(0,nums.size(),temp,res,nums);
        return res;
    }
};