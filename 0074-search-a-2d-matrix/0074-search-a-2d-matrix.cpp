class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = (n*m)-1;
        int mid = low + (high - low)/2 ;
//         while(low<=high)
//         {
//             int col = mid%m;
//             int row = mid/m;
//             int ele = matrix[row][col];
//             if(ele == target)
//                 return true;
//             else if(ele < target)
//                 low++;
//             else
//                 high--;
//             mid = low + (high-low)/2;
//         }

//         return false;
        
        // practice
        
        while(low <= high)
        {
            int col = mid%m;
            int row = mid/m;
            int ele = matrix[row][col];
            if(ele == target)
            {
                return true;
            }
            else if (ele < target)
            {
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            mid = low + (high-low)/2;
        }
        return false;

        
    }
};