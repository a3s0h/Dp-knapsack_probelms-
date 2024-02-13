class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
//         int i =0;
//         int j =0 ;
        int n = nums.size();
        for(int i =0 ;i<n;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for(int j =i+1;j<n;j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                long long int sum = nums[i] + nums[j];
                int k =j+1;
                int l = n-1;
                // vector<int> ans;
                while(k<l)
                {
                    int tempSum = nums[k]+nums[l];
                    if(sum + tempSum == target)
                    {
                        // ans.push_back();
                        res.push_back({nums[i],nums[j],nums[k],nums[l]});
                        //skip the duplicates:
                        k++;l--;
                        while (k < l && nums[k] == nums[k - 1]) k++;
                        while (k < l && nums[l] == nums[l + 1]) l--;
                    }
                    else if(sum+tempSum < target)
                    {
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return res;
        
    }
};