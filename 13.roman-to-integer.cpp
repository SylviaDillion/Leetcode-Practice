/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include<iostream>
#include<unordered_map>

using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hash ={
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int result = 0;
        for(int i=0;i<s.size();++i){
            int curr=hash[s[i]];
            int next = (i+1<s.size()) ? hash[s[i+1]]:0;
            if(curr<next)
                result -= curr;
            else
                result += curr;
        }
        return result;
    }
};
// @lc code=end

