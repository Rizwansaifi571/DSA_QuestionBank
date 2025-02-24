/*
43. Multiply Strings
<Medium>
https://leetcode.com/problems/multiply-strings/description/

Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

 

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"
Example 2:

Input: num1 = "123", num2 = "456"
Output: "56088"
 

Constraints:

1 <= num1.length, num2.length <= 200
num1 and num2 consist of digits only.
Both num1 and num2 do not contain any leading zero, except the number 0 itself.

*/

#include <iostream> 
#include <vector>
#include <string>
using namespace std;    

string multiply(string num1, string num2) {
        int n = num1.length();
        int m = num2.length();
        vector<int> result(n + m, 0);

        for(int i = n - 1; i >= 0; i--) {
            for(int j = m - 1; j >= 0; j--) {
                int index1 = num1[i] - '0';
                int index2 = num2[j] - '0';
                int sum = result[i + j + 1] + index1 * index2;
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        string product;
        for(int num : result) {
            num = num + '0';
            if(!(product.empty() && num == '0'))
                product.push_back(num);
        }
        return product.empty() ? "0" : product;