/*
Check if the Sentence Is Pangram
<Easy>
https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false
 

Constraints:

1 <= sentence.length <= 1000
sentence consists of lowercase English letters.


*/

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool checkIfPangram(string sentence) {
        unordered_set<char> check(sentence.begin(), sentence.end());
        return check.size() == 26;
    }