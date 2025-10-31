/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10 == 0 && x != 0))
            return false;
        vector<int> nums;
        long long subst = x;
        while(subst != 0){
            nums.push_back(subst%10);
            subst /= 10;
        }
        for(int i = 0; i<nums.size() ; ++i){
            subst+=nums[i]*pow(10,nums.size()-1-i);
        }
        if(x == subst)
            return true;
        else 
            return false;
    }
};
// @lc code=end

