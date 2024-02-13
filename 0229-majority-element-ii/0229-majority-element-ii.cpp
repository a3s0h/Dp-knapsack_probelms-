class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = n/3;
        vector<int> res;
        map<int,int> mp;
        for(auto it : nums)
        {
            mp[it]++;
            
        }
        for(auto it : mp)
        {
            if(it.second > cnt)res.push_back(it.first);
        }
        return res;
    }
};