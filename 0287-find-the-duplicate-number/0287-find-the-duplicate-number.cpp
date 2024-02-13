class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int x = 0;
        for(int i = 1; i < nums.size(); i++){
            x = x ^ i;
        }
        for(int i = 0; i < nums.size(); i++){
            x = x ^ nums[i];
            if(mp[x]){
                return nums[i];
            }else{
                mp[x] = 1;
                x = x ^ nums[i];
            }
        }
        return -1;
    }
};