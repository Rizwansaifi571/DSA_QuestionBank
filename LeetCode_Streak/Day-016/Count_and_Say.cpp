/*
38. Count and Say
<Medium>
https://leetcode.com/problems/count-and-say/description/

The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the run-length encoding of countAndSay(n - 1).
Run-length encoding (RLE) is a string compression method that works by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string "3322251" we replace "33" with "23", replace "222" with "32", replace "5" with "15" and replace "1" with "11". Thus the compressed string becomes "23321511".

Given a positive integer n, return the nth element of the count-and-say sequence.

 

Example 1:

Input: n = 4

Output: "1211"

Explanation:

countAndSay(1) = "1"
countAndSay(2) = RLE of "1" = "11"
countAndSay(3) = RLE of "11" = "21"
countAndSay(4) = RLE of "21" = "1211"
Example 2:

Input: n = 1

Output: "1"

Explanation:

This is the base case.

 

Constraints:

1 <= n <= 30

*/

#include <iostream>
#include <string>
using namespace std;

string change(string &num) {
        string result;
        result.reserve(num.length() * 2);
        int count = 1;
        for(int i = 0; i < num.length(); i++) {
            if(i < num.length() - 1 && num[i] == num[i + 1]) {
                count++;
            }
            else {
                result.append(to_string(count));
                result.push_back(num[i]);
                count = 1;
            }
        }
        return result;
    }



    string countAndSay(int n) {
        string result = "1";
        while(n > 1) {
            result = change(result);
            n--;
        }
        return result;