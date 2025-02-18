/*
28. Find the Index of the First Occurrence in a String
<Easy>
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.

*/

#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
        if(needle.empty()) return -1;
        
        int index = 0;
        int l1 = haystack.length();
        int l2 = needle.length();
        if(l2 > l1) return -1;
        
        for(int i = 0; i <= l1 - l2; i++) {
            if(haystack.substr(i, l2) == needle) {
                return i;
            } 
        }
        return -1;
    }