/*
645. Set Mismatch
<Easy>
https://leetcode.com/problems/set-mismatch/description/

You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

 

Example 1:

Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:

Input: nums = [1,1]
Output: [1,2]
 

Constraints:

2 <= nums.length <= 104
1 <= nums[i] <= 104
*/

#include <iostream>
#include <vector>   
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int dup = -1;
        int mis = -1;

        for(int i = 0; i < n; i++) {
            if(nums[abs(nums[i]) - 1] < 0) {
                dup = abs(nums[i]);
            }
            else {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                mis = i + 1;
                break;
            }
        }
        return {dup, mis};
    }