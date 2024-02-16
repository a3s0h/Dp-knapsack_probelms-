class Solution {
public:
   int permut(int n) {
        if (n == 0 || n == 1) return 1;
        return n * permut(n - 1);
    }

    string getPermutation(int n, int k) {
        if (k > permut(n)) return "";

        string nums;
        for (int i = 1; i <= n; i++) {
            nums += to_string(i);
        }

        string res="";
        k--; // Convert to 0-based indexing

        for (int i = n; i > 0; i--) {
            int perm = permut(i - 1);
            int index = k / perm;
            res += nums[index];
            nums.erase(nums.begin() + index);
            k %= perm;
        }

        return res;
    }
};


/*
1,2,3

k = 4

1->2 
2->2
3->2

which element -> k/number of perm for single element
thsi will give 1 based index 

ex., k = 4 
4/2 = 2 i.e., 2nd elemtn or 1st index element in 0 based indesing 
therefore first elemnt  will be 2

so this 1 (0 based) gave me the starting point like from hwere to start right!!
i have to start from 2 now look forward  from here


res = "2"

how much left form here tha tis from 2 
isse pehele 1 tha uske 2 perm bn chuke the so now 4-2 (i.e., k - prev number permutations) 
4-2 = 2


so now i have to go 2 perm further starting from 2 
taht means new value for k = 2 
and elements are 1,3

1->1 
3->1

2/1 = 2  that is 1 in 0 based indexing therefore the next will be 3 

res = "23";


now next k = k - prev number perm 
k = 2 - 1 = 1;

3rd iteration
k = 1
element = {1}

k = 1/1 = 1 that is 0 in 0 based indexing
and element at 0 is 1 
1->1 only 1 permutaion can be made 

k = k/1  (number of permutation for single element)
k = 1/1 = 1

res = "231"
k = k-1 = 1-1 = 0
now when k becomes 0 break and return the ans 


***********psuedo code 
// considering for one element cuz recursion will settle for others
arr = {1,2,3}
k = 4;
permutaion for a single number -> int perm = (arr.size()-1)!; 

getting whihc element will come here 
element = (k/perm) ;1 based ,  k / number of perm for single element
res string ma push krde 
before calling the function again send new string s and k value 
remove the taken charahter fomr the s given string
for k : 
  k = k - number of perms of prev numbers ;
  number of prev chars = arr.size() - element-1; cuz 1 based tha pehele element
  number of prev perms = number of prev chars * permutations for single number ;
  k = k - number of prev perms;
  
  now call the same function gaian with new values
  
  
  *****************BASE CASE*************
  if(k==0) return res;



*/