/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> preMap;

        for(int i=0; i<nums.size();i++){
            if(preMap.find(nums[i])!=preMap.end())
                return true;
            preMap.insert({nums[i], i});
        }
        return false;

        
    }
};
// @lc code=end

