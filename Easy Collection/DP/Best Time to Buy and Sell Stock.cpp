//https://leetcode.com/explore/interview/card/top-interview-questions-easy/97/dynamic-programming/572/

/*
Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell one share 
of the stock), design an algorithm to find the maximum profit.

Note that you cannot sell a stock before you buy one.

Example 1:

Input: [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
             Not 7-1 = 6, as selling price needs to be larger than buying price.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        
        int mn = INT_MAX;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(prices[i]<mn){
                mn = prices[i];
            }else if(prices[i] - mn > ans){
                ans = prices[i]-mn;
            }            
        }
        return ans;        
    }
};