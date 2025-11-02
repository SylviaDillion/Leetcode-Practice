/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        for(int i = 0; i<strs[0].size(); ++i){//表示字母
            for(int j=0; j<strs.size(); ++j){//表示vector
                if(j == strs.size()-1){
                    result+=strs[0][i];
                    break;
                }
                if(strs[j][i] == strs[j+1][i])
                    continue;
                else
                    return result;
            }
        }
        return result;
    }
};
// @lc code=end

