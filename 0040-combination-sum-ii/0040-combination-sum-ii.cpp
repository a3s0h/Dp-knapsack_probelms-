class Solution {
public:

    void solve(int ind ,int n, vector<int> &temp, vector<vector<int>> &res, vector<int> &nums , int t)
    {
        if(ind == n || t== 0)
        {
            if(t==0)
            {
                sort(temp.begin(),temp.end());
                res.push_back(temp);
            }
            return ;
        }
        // thsi mthd will cnsider the duplicates also and same subsets
//         if(nums[ind] <= t)
//         {
//             temp.push_back(nums[ind]);
//             solve(ind+1,n,temp,res,nums,t-nums[ind]);
//             temp.pop_back();
//             solve(ind+1,n,temp,res,nums,t);    // no considering
//         }
//         // if nums of ind is greater than target
//         else
//         {
//             solve(ind+1,n,temp,res,nums,t);    
//         }
        
        // new mthd
        
        for(int i = ind ;i<n ;i++)
        {
            if(i>ind && nums[i] == nums[i-1])continue;
            if(nums[i] > t)break;
            temp.push_back(nums[i]);
            solve(i+1,n,temp,res,nums,t-nums[i]);
            temp.pop_back();
        }
        
    }

    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        vector<vector<int>> res;
        vector<int> temp;
        solve(0,c.size(),temp,res,c,target);
        return res;
    }
};