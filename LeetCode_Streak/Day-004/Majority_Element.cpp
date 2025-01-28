/*
169. Majority Element
<Easy>
https://leetcode.com/problems/majority-element/description/

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109

*/


#include <iostream>
#include <vector>
using namespace std;


int majorityElement(vector<int>& nums) {
        int count = 0;
        int majority = nums[0];

        for(int i = 0; i < nums.size(); i++) {
            if(majority == nums[i]) {
                count++;
            }
            else {
                count--;
            }

            if(count <= 0) {
                majority = nums[i];
                count++;
            }
        }
        return majority;
    }