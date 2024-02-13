class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int cnt = m+n-1;
        int i = m-1;
        int j = n-1;
//         while(i>=0 && j >= 0)
//         {
//             if(nums1[i] > nums2[j])
//             {
//                 nums1[cnt] = nums1[i];
//                 i--;
//                 cnt--;
//             }
//             else{
//                 nums1[cnt] = nums2[j];
//                 j--;
//                 cnt--;
//             }
//         }
//         while(i>=0)
//         {
//             nums1[cnt--] = nums1[i--];

//         }
//         while(j>=0)
//         {
//             nums1[cnt--] = nums2[j--];

//         }
        // return nums1;
        
        
        
        // practice
        
        
        while(i>=0 && j>=0)
        {
            if(nums1[i] == nums2[j])
            {
                nums1[cnt] = nums1[i];
                i--;
                cnt--;
            }
            else if (nums1[i] < nums2[j])
            {
                nums1[cnt] = nums2[j];
                j--;
                cnt--;
            }
            else{
                nums1[cnt] = nums1[i];
                cnt--;
                i--;
            }
        }
        
        while(i>=0)
        {
            nums1[cnt--] = nums1[i--];
        }
        while(j>=0)
        {
            nums1[cnt--] = nums2[j--];
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};