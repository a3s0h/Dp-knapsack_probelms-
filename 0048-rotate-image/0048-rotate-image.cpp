class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int row = nums.size();
        int col  = nums[0].size();
//         for(int i =0;i<row;i++)
//         {
//             for(int j =0;j<i;j++)
//             {
//                 swap(matrix[i][j] , matrix[j][i]);
//             }
//         }

//         for(int i =0;i<row;i++)
//         {
//             for(int j =0;j<col/2;j++)
//             {
//                 swap(matrix[i][j],matrix[i][col-j-1]);
//             }
//         }
        
        
        // transpose -> swap columns
        for(int i =0;i<row;i++)
        {
            
            for(int j =0;j<col;j++)
            {
                if(i>j)
                swap(nums[i][j],nums[j][i]);
            }
            
        }
        
        for(int i =0;i<row;i++)
        {
            for(int j =0;j<col/2;j++)
            {
                swap(nums[i][j] , nums[i][col-j-1]);
            }
        }
        
        
    }
};