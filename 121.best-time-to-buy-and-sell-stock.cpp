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
        int left = 0;
        int right = left + 1;
        int max = 0;
        while(right!=prices.size()){
            if(prices[left] < prices[right]){
                int profit = prices[right] - prices[left];
                if(max < profit){
                    max = profit;
                }
            }
            else{
                left = right;
            }
            right++;
        }
        return max;
    }
};
// @lc code=end

