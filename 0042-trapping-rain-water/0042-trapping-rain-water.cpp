class Solution {
public:
    int trap(vector<int>& height) {
        int maxArea = 0;
        int leftMax = 0;
        int rightMax =0 ;
        int i= 0;
        int j = height.size()-1;
        while(i<=j)
        {
            if(leftMax <= rightMax)
            {
                if(leftMax < height[i])
                {
                    leftMax = height[i];
                }
                else{
                    maxArea += leftMax - height[i];
                }
                i++;
            }
            else{
                if(rightMax < height[j])
                {
                    rightMax = height[j];
                }
                else{
                    maxArea += rightMax - height[j];
                }
                j--;
            }
         }
        return maxArea;
    }
};


// --                           -