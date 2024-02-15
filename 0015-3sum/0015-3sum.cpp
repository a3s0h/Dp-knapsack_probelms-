class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int i =0;
        int n = nums.size();
        while(i<n)
        {
            if(i!=0 && nums[i] == nums[i-1]){i++;continue;}
            int j = i+1;
            int k = n-1;
            int sum = nums[i];
            while(j<k)
            {
                int tg = sum + nums[j] + nums[k];
                if(tg == 0)
                {
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;k--;
                    while(j<k && nums[j] == nums[j-1])j++;
                    while(j<k && nums[k] == nums[k+1])k--;
                    
                }
                else if(tg < 0)
                {
                    j++;
                }
                else{
                    k--;
                }
            }
            i++;
        }
        
        return res;
    }
};