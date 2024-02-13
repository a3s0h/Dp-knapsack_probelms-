// class Solution {
// public:
//     // int func(int n ,vector<int> &temp , vector<vector<int>> &ans)
//     // {
//     //     if(n == 0)
//     //     {
//     //         return 1;
//     //     }

//     //     for(int i = 0; i<= ind;i++)
//     //     {
//     //         for(int j =0;j<ind;j++)
//     //         {
//     //             temp.push_back(calcValue());
//     //         }

//     //     }
//     // }
//     vector<vector<int>> generate(int numRows) {
//         // vector<vector<int>> ans ; 
//         // vector<int> temp;
//         // return func(numRows,temp,ans);

//         if (numRows == 0) {
//             return {};
//         }
        
//         std::vector<std::vector<int>> triangle = {{1}};
        
//         for (int i = 1; i < numRows; ++i) {
//             std::vector<int> row = {1};
//             for (int j = 1; j < i; ++j) {
//                 row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
//             }
//             row.push_back(1);
//             triangle.push_back(row);
//         }
        
//         return triangle;
//     }
// };


// dp 
// class Solution {
// public:
//     vector<vector<int>> generate(int N) {
//         vector<int> dp;
//         dp.push_back(1);
//         vector<vector<int>> res;
//         res.push_back(dp);
//         if (N == 1){
//             return res;
//         }
//         dp.push_back(1);
//         res.push_back(dp);
//         // cout<<"res now :"<<endl;
//         // for(int i =0;i<dp.size();i++)
//         // {
//         //     for(int j =0;j<res[i].size();j++)cout<<res[i][j]<<" ";
//         //     cout<<endl;
//         //     // cout<<dp[i]<<" ";
//         // } 
//         for (int i = 2; i < N; i++){
//             dp.push_back(1);
//             for (int x = i-1; x > 0; x--){
//                 dp[x] = dp[x] + dp[x-1]; 
//             }
//             res.push_back(dp);
//         }
//         return res;
//     }
// };






class Solution {
public:
    vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> res;
//         queue<int> q;
//         q.push(1);
//         res.push_back({1});
//         for(int i =1;i<N;i++)
//         {
//             queue<int> tempQ;
//             int len = q.size();
//             int prev =0 ;
//             vector<int> temp;
//             for(int j =0;j<len;j++)
//             {
                
//                 if(j==len-1){
//                     temp.push_back(prev+q.front());
//                     temp.push_back(q.front());
//                     tempQ.push(q.front());
//                     q.pop();
                    
//                 }
//                 else if(j==0)
//                 {
//                     prev = q.front();
//                     temp.push_back(q.front());
//                     q.pop();
//                     tempQ.push(prev);
//                 }
                
//                 else{
//                     temp.push_back(prev+q.front());
//                     prev = q.front();
//                     tempQ.push(prev+q.front());
//                     q.pop();
//                 }
//             }
            
//             q = tempQ;
//             res.push_back(temp);
            
//         }
//         return res;
        
        
         if (numRows == 0) {
            return {};
        }
        
        std::vector<std::vector<int>> triangle = {{1}};
        
        for (int i = 1; i < numRows; ++i) {
            std::vector<int> row = {1};
            for (int j = 1; j < i; ++j) {
                row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
            }
            row.push_back(1);
            triangle.push_back(row);
        }
        
        return triangle;
        
        
        
        
    }
};




























