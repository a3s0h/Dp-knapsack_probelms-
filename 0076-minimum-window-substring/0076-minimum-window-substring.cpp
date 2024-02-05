class Solution {
public:
    string minWindow(string s, string t) {
         int n = s.size();
        // step 1: declare a map and populate it with string t's char-> count
        map<char,int> mp;
        for(auto it: t){
            mp[it]++;
        }
        int count = mp.size();

        int i = 0,j = 0;
        int start = 0;
        int maxLen = INT_MAX;

        //step 2: until j reaches the end of the main string s
        while(j<n){
            // step 3: if j is found in the map then take it & decrease the count of it in map and if it becomes zero that means we got all of the need of that char so count--
            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;
                if(mp[s[j]] == 0){
                    count--;
                }
            }
                
        // step 4:if count becomes 0 that means we got all  chars we needed and this is a valid answer so store it and check if this can further be optimised by sliding i 
            if(count == 0){
                while(count == 0){
                    if(j - i + 1 < maxLen){
                        start = i;
                        maxLen = j - i + 1;
                    }
                    if(mp.find(s[i]) != mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]] == 1){
                            count++;
                        }
                    }
                    i++;
                }
            }
            j++;
        }

        // step 5: if maxLen is still int max then it means we didnt get our answer so return empty string , else return the answer substring 
        if(maxLen == INT_MAX) return "";
        return s.substr(start, maxLen);     
    
        
    }
};