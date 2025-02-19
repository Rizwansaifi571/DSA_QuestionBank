/*
345. Reverse Vowels of a String
<Easy>
https://leetcode.com/problems/reverse-vowels-of-a-string/description/

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"

 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.

*/

#include <iostream>
#include <vector>
using namespace std;

string reverseVowels(string &s) {
        vector<int> vowel;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                vowel.push_back(i);
            }
        }

        for(int i = 0; i < vowel.size() / 2; i++) {
            swap(s[vowel[i]], s[vowel[vowel.size() - 1 - i]]);
        }
        return s;
    }