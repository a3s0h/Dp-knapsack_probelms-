class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum = 0;
        mp[sum] = 1;
        int cnt = 0;
        for(int i =0;i<nums.size();i++)
        {
            sum += nums[i];
            int findSum = sum - k;
            if(mp.find(findSum) != mp.end())
            {
                cnt+=mp[findSum];
            }
            mp[sum]++;
        }
        return cnt;
    }
};



/*
       yha tk ka sum k or nhi to baaki jo bcha ha wo x-k hona chahiye therefore we are finicngg x-k therefore we need prefix sum 
       ------
[ , , , , , , , ,]
-------------
yha tk ka sum =x 
*/