/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<char> pare;
        for(int i=0; i<s.size(); ++i){
            switch(s[i]){
                case '(' :
                pare.push_back(')');
                break;

                case '{' :
                pare.push_back('}');
                break;

                case '[' :
                pare.push_back(']');
                break;

                default :
                if(pare.empty())
                    return false;
                else if(s[i] == pare.back())
                    pare.pop_back();
                else
                    return false;
                break;
            }
        }
        if(pare.empty())
            return true;
        else
            return false;
    }
};
// @lc code=end

