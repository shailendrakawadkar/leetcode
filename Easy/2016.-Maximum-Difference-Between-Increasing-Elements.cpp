//====================BRUTE FORCE APPROACH====================//

//Runtime: 28 ms, faster than 18.59% of C++ online submissions for Maximum Difference Between Increasing Elements.
//Memory Usage: 8.2 MB, less than 98.86% of C++ online submissions for Maximum Difference Between Increasing Elements.

class Solution {
public:
    int maximumDifference(vector<int>& prices) {
       int maxDIff = -1;
        for(int i = 0; i < prices.size(); ++i)
        {
           for(int j = i + 1; j < prices.size(); ++j)
           {
               if(prices[j] > prices[i] &&(prices[j] - prices[i]) > maxDIff) maxDIff = prices[j] - prices[i];
           }
        }
        
        return maxDIff;
    }
};


//=================================BETTER SOLUTION========================//

//Runtime: 3 ms, faster than 85.99% of C++ online submissions for Maximum Difference Between Increasing Elements.
//Memory Usage: 8.4 MB, less than 37.78% of C++ online submissions for Maximum Difference Between Increasing Elements

class Solution {
public:
    int maximumDifference(vector<int>& prices) {
       int maxDIff = -1;
        int min_element = prices[0];
        for(int i = 1; i < prices.size(); ++i)
        {
           if(prices[i] < min_element) min_element = prices[i];
        
            if(prices[i] > min_element && (prices[i] - min_element) > maxDIff) maxDIff = prices[i] - min_element;
        }
        
        return maxDIff;
    }
};
