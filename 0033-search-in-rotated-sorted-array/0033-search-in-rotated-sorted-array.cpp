class Solution {
public:
    
    int solve(int low , int high  , vector<int> &nums,int target)
    {
        int l = low ; 
        int h = high;
        int mid = l + (h-l)/2;
        while(l<=h)
        {
            if(nums[mid] == target)return mid;
            else if (nums[mid] < target)l = mid +1 ;
            else h = mid-1;
            mid = l + (h-l)/2;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1 && nums[0] == target)return 0;
        if(nums.size() == 1 && nums[0] != target) return -1;
        int idx = -1;
        for(int i = nums.size()-2;i>=0;i--)
        {
            if(nums[i] > nums[i+1])
            {
                idx = i+1;
                break;
            }
        }
        cout<<idx<<endl;
        int low = 0,high = nums.size()-1;
        if(idx != -1)
        {
            //check in whihc part does target lies
            if(target>= nums[0] && target <= nums[idx-1])
                return solve(low,idx-1 , nums,target);
            else    
                return solve(idx , high , nums,target);
        }
        return solve(low,high , nums,target);
    }
};