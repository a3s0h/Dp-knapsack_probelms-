class Solution {
public:
    
   
    
    int findIntegers(int n) {
        vector<int> fib(31,0);
        fib[0] =1;
        fib[1] = 2;
        for(int i =2;i<30;i++)
        {
            fib[i] = fib[i-1] + fib[i-2];
        }
        
        int ans =0 , cnt = 30 , prev_bit_one = 0;
        
        while(cnt >= 0)
        {
            if(n & (1<<cnt))
            {
                ans += fib[cnt];
                if(prev_bit_one == 1)return ans;
                prev_bit_one = 1;
            }
            else{
                prev_bit_one = 0;
            }
            cnt--;
        }
        
        return ans+1;
    }
};