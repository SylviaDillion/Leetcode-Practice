/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int dif;
        vector<int> ans;
        for(int i=0;i<nums.size() ;++i){
                dif = target-nums[i];
                for(int j = i+1; j<nums.size();++j){
                    if(nums[j] == dif){
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                }
        }
        return ans;
    }
};
// @lc code=end

