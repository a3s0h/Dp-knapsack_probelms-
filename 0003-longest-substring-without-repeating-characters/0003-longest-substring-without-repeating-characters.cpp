class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0)return 0;
        map<char,int> mp;
        int i =0;
        int j = 0;
        int n = s.size();
        int ans = 1 ;
        while(j<n)
        {
            mp[s[j]]++;
            if(mp[s[j]] == 1)j++;
            else if(mp[s[j]] > 1)
            {
                // cout<<"here i and ja re :"<<i<<" "<<j<<" for element "<<s[j]<<endl;
                // cout<< " map value for "<<s[j] <<" = "<<mp[s[j]]<<endl;
                // cout<<"j : "<<j<<endl;
                ans = max(ans , j-i);
                // cout<<"ans : "<<ans<<endl;
                while(i<j && mp[s[j]] > 1)
                {
                    mp[s[i]]--;
                    if(mp[s[i]] == 0)mp.erase(s[i]);
                    if(s[i] == s[j])break;
                    i++;
                }
                i++;
                // cout<<"i and j are "<<i <<" "<<j<<endl;
                j++;
                
            }
        }
        return max(static_cast<int>(mp.size()) , ans);
    }
};