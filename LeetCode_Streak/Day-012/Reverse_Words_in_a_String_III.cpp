/*
557. Reverse Words in a String III
<Easy>
https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "Mr Ding"
Output: "rM gniD"
 

Constraints:

1 <= s.length <= 5 * 104
s contains printable ASCII characters.
s does not contain any leading or trailing spaces.
There is at least one word in s.
All the words in s are separated by a single space.

*/

#include <iostream>
#include <string>
using namespace std;

void reverse(string& s, int start, int end) {
        while(start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }

    string reverseWords(string& s) {
        int index = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                reverse(s, index, i - 1);
                index = i + 1;
            }
        }
        reverse(s, index, s.length() - 1);
        return s;