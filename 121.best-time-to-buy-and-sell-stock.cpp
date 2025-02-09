/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //unordered_map<int, int> tempMap;
        int profit=0;
        for(int i=0; i< prices.size(); i++){
            for(int j=i; j < prices.size(); j++){
                if(prices[j]-prices[i] > profit)
                    profit = prices[j]- prices[i];
            }
        }
        return profit;
    }
};
// @lc code=end

