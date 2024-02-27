class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        long long int area = 0,n = bottomLeft.size();
        for(int i =0;i<n;i++)
        {
            for(int j= i+1;j<n;j++)
            {
                long long int minx = max(bottomLeft[i][0] , bottomLeft[j][0]);
                long long int maxx = min(topRight[i][0] , topRight[j][0]);
                long long int minY = max(bottomLeft[i][1] , bottomLeft[j][1]);
                long long int maxY = min(topRight[i][1] , topRight[j][1]);
                
                if(minx < maxx && minY < maxY)
                {
                    long long int side = min(maxx - minx , maxY-minY);
                    area = max(area,side*side);
                }
            }
        }
        
        return area;
        
        
    }
};


/*

bottomLeft = [[1,1],[2,2],[1,2]], topRight = [[3,3],[4,4],[3,4]]

        

*/