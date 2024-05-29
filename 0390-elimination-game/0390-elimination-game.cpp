class Solution {
public:
    int lastRemaining(int n) {
        bool left = true;
        int res = 0;
        int head = 1;
        int steps = 1;
        int remaining = n;
        while(remaining!=1)
        {
            if(left || remaining%2 != 0) 
            {
                head += steps;
            }
            
            /*
            
                1 2 3 4 5 6 7 8 9  left = true
                head = 2 
                steps = 2 
                remaining = 4 
                
                2 4 6 8  left = false
                head = 2
                steps = 4 
                remaining = 2
                
                2 6 left = true
                head = 6 
                steps = 
                remainig = 1 
                
            
            */
            // cout<<"new head "<<head<<endl;
            
            steps *= 2;
            remaining /= 2;
            // cout<<"for steps : "<<steps << " and remianing : "<<remaining<<endl;
            left= !left;
        }
        return head;
    }
};
