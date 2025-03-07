/*
389. Find the Difference
<Easy>
https://leetcode.com/problems/find-the-difference/description/

You are given two strings s and t.

String t is generated by random shuffling string s and then add one more letter at a random position.

Return the letter that was added to t.

 

Example 1:

Input: s = "abcd", t = "abcde"
Output: "e"
Explanation: 'e' is the letter that was added.
Example 2:

Input: s = "", t = "y"
Output: "y"

*/

#include <iostream>
#include <string>
using namespace std;

char findTheDifference(string s, string t) {
        char result = 0;

        for(char c : s) {
            result ^= c;
        }

        for(char c : t) {
            result ^= c;
        }
        return result;