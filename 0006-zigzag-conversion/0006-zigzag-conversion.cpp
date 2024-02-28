class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1)return s;
        
        vector<string> res(numRows+1,"");
        
        int index = 0 ;
        int n = s.size();
        bool flag = true;
        for(int i =0;i<n;i++)
        {
            res[index] += s[i];
            if(flag)index++;    // forward (downward)
            else index--;       // reverse (diagonally )
            
            if(index == numRows-1)flag = false;
            else if(index ==0) flag = true;
            
        }
        string ans ="";
        for(auto it : res)
        {
            ans = ans + it;
        }
        return ans;
    }
};