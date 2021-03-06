//===================BRUTE FORCE=====================//

//Runtime: 4 ms, faster than 14.51% of C++ online submissions for Count of Matches in Tournament.
//Memory Usage: 5.8 MB, less than 69.90% of C++ online submissions for Count of Matches in Tournament.

class Solution {
public:
    int numberOfMatches(int n) {
        int output = 0;
        
        while(n != 1)
        {
            int mod = n % 2;
            
            output += n/2;
            
            n = n/2 + mod;
        }
        
        return output;
    }
};


//=================== OPTIMAL SOLUTION ==================//

//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count of Matches in Tournament.
//Memory Usage: 6 MB, less than 23.99% of C++ online submissions for Count of Matches in Tournament.

class Solution {
public:
    int numberOfMatches(int n) {
         return n - 1;
    }
};

