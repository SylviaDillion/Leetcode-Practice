/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include<vector>
#include<unordered_map>
using namespace std; 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash;
    for(int i = 0; i < nums.size() ;++i){
        int complement = target-nums[i];
        if(hash.count(complement) == 1){
            return {hash[complement], i};
        }
        hash[nums[i]]=i;
    }
    return {};
    }
};
// @lc code=end

