class Solution {
public:

    void solve(int ind ,int n ,vector<int> &temp,vector<vector<int>> &res,vector<int> &cd , int t)
    {
        if(ind == n || t == 0)
        {
            if(t == 0)
                res.push_back(temp);
            return ;
        }
        if(t<0){return;}
        
        if(cd[ind] <= t)
        {
            temp.push_back(cd[ind]);
            solve(ind,n,temp,res,cd,t-cd[ind]);
            temp.pop_back();
            solve(ind+1,n,temp,res,cd,t);  // not choosing
        }
        // else if number is greater than target then no need to choose 
        else{
            solve(ind+1,n,temp,res,cd,t);
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        
        vector<int> temp;
        solve(0,candidates.size() , temp,res,candidates , target);
        return res;

    }
};