/*
34. Find First and Last Position of Element in Sorted Array
<Medium>
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109


*/

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target, bool first) {
        int start = 0;
        int end = nums.size() - 1;
        int result = -1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target) {
                result = mid;
                if(first == true) end = mid - 1;
                else start = mid + 1;
            }
            else if(nums[mid] < target) start = mid + 1;
            else end = mid - 1; 
        }
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = binarySearch(nums, target, true);
        int last = binarySearch(nums, target, false);
        return {first, last};
    }