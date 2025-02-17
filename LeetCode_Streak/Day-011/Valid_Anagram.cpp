/*
242. Valid Anagram
<Easy>
https://leetcode.com/problems/valid-anagram/description/

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.

*/

#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> freq;

        for(char c : s) {
            freq[c]++;
        }

        for(char c : t) {
            if(freq.find(c) == freq.end() || freq[c] == 0) {
                return false;
            }
            freq[c]--;
        }
        return true;
    }