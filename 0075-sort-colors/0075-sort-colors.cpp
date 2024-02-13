class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i =0; // to keep counter on 0's 
        int j =0; // // to keep counter on 1's 
        int k = nums.size()-1; // // to keep counter on 2's
        
        while(j<=k)
        {
            if(nums[j] == 0 )
            {
                swap(nums[i],nums[j]);
                j++;i++;
            }
            else if (nums[j] == 1)j++;
            else if (nums[j]==2)
            {
                while(k>j && nums[k]==2)
                {
                    k--;
                }
                swap(nums[j],nums[k]);
                k--;
            }
        }
        
    }
};