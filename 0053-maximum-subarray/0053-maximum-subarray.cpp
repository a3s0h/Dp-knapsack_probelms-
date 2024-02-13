class Solution {
public:
    int maxSubArray(vector<int>& nums) {
//         int sum = 0;
//         int maxSum = INT_MIN;
//         for(int i =0;i<nums.size();i++)
//         {
//             sum += nums[i];
//             if(sum <=0)
//             {
//                 maxSum = max(maxSum,sum);
//                 sum = 0;
//             }
//             if(sum>0)
//                 maxSum = max(maxSum,sum);

//         }
//         return maxSum;
        
        
        
        
        // practice
        
        int i =0;
        int n =nums.size();
        int maxSum = INT_MIN;
        int sum = 0 ;
        while(i<n)
        {
            sum += nums[i];
            if(sum < 0)
            {
                maxSum = max(maxSum,sum);
                sum = 0;i++;continue;
            }
            // cout<<sum<<endl;
            maxSum = max(maxSum,sum);
            i++;
        }
        return maxSum;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};