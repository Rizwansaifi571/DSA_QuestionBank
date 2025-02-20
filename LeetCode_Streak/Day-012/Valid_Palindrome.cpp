/*
125. Valid Palindrome
<Easy>
https://leetcode.com/problems/valid-palindrome/description/

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.

*/

#include <iostream>
#include <string>
using namespace std;

void valid(string& s) {
        int index = 0;
        for(char c : s) {
            if((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') || (c <= '9' && c >= '0')) {
                s[index] = c;
                index++;
            }
        }
        s.resize(index);
    }


    void toLower(string& s) {
        for(char &c : s) {
            if(c <= 'Z' && c >= 'A') {
                c = c - 'A' + 'a';
            }
        }
    }

    bool isPalindrome(string s) {
        valid(s);
        toLower(s);
        int start = 0;
        int end = s.length() - 1;

        while(start < end) {
            if(s[start] != s[end]) {
                return false;
            }
            else {
                start++;
                end--;
            }
        }
        return true;