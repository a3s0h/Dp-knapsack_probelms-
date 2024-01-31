class Solution {
public:
    long long flowerGame(int n, int m) {
        // int maxi = max(n,m);
        // vector<int> temp ;
        // for(int i =0;i<maxi;i++)
        // {
        //     temp.push_back(i+1);
        // }
        
        if(n>m)swap(n,m);
        long long res = 0;
        long long int ev = n/2;
        long long int od = n%2 == 1 ? (n/2)+1 : n/2;
        
        res += m%2  == 1 ? ev*( (m/2)+1 ) : ev*(m/2);
        res += od*(m/2);
        
        return res;
        
    }
};