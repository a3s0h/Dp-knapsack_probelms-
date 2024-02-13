class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = n/2;
        map<int,int> mp;
        for(auto it : nums)
        {
            mp[it]++;
            if(mp[it] > cnt)return it ;
        }
        return 0;
    }
};