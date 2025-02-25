/*
14. Longest Common Prefix
<Easy>
https://leetcode.com/problems/longest-common-prefix/description/

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.

*/

#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        int index = 0;
        string result;

        int mini = INT_MAX;
        for(int i = 0; i < strs.size(); i++) {
            int len = strs[i].length();
            mini = min(mini, len); 
        }

        while(mini > index) {
            char value = strs[0][index];
            for(int i = 0; i < strs.size(); i++) {
                if(value != strs[i][index]) {
                    return result;
                }
            }
            result.push_back(strs[0][index]);
            index++;
        }
        return result;