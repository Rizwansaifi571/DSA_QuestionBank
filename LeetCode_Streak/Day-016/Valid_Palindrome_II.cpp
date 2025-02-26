/*
680. Valid Palindrome II
<Easy>
https://leetcode.com/problems/valid-palindrome-ii/description/

Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false
 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.
*/

#include <iostream>
#include <string>
using namespace std;    

bool ispalindrome(string s, int start, int end) {
        while(start < end) {
            if(s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        while(start < end) {
            if(s[start] != s[end]) {
                return ispalindrome(s, start + 1, end) || ispalindrome(s, start, end - 1);
            }
            start++;
            end--;
        }
        return true;