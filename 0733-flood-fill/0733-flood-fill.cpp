class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<pair<int,int>> dir = {{0,-1} , {-1,0} , {0,1} , {1,0}};
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int n = image.size();
        int m = image[0].size();
        int strt = image[sr][sc];
        image[sr][sc] = color;
        while(!q.empty())
        {
            int len = q.size();
            // if(image[q.front().first ][q.front().second] == color)break;
            for(int i =0;i<len;i++)
            {
                auto p = q.front();
                q.pop();
                for(auto it : dir)
                {
                    int ii = it.first + p.first;
                    int jj = it.second + p.second;
                    if(ii>=0 && ii<n && jj<m && jj>=0 && image[ii][jj] == strt && image[ii][jj] != color)
                    image[ii][jj] = color , q.push({ii,jj}) ;
                
                }cout<<"--"<<endl;
            }
        }
        
        return image;
    }
};