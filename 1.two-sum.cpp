/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        unordered_map<int, int> hashmap; 

        for (int i = 0; i < length; i++) {
            int diff = target - nums[i];
            if (hashmap.find(diff) != hashmap.end()) {
                return {hashmap[diff], i};
            }
            hashmap.insert({nums[i], i});
        }
        return {};
    }
};
// @lc code=end

