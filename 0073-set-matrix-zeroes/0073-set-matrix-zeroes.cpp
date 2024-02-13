class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<pair<int,int>> temp;
        for(int i =0;i<m.size();i++)
        {
            for(int j =0;j<m[0].size();j++)
            {
                if(m[i][j] == 0)
                    temp.push_back({i,j});
            }
        }
        
        for(int i=0;i<temp.size();i++)
        {
            int row = temp[i].first;
            int col = temp[i].second;
            for(int j = 0;j<m.size();j++)
            {
                m[j][col] = 0;
            }
            for(int j = 0;j<m[0].size();j++)
            {
                m[row][j] = 0;
            }
            
        }
        
        
        
    }
};