/*
560. Subarray Sum Equals K

<Medium>
https://leetcode.com/problems/subarray-sum-equals-k/description/

Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 

Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1; 
        
        int subarrayCount = 0, prefixSum = 0;

        for(int num : nums) {
            prefixSum += num; 

            if(prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
                subarrayCount += prefixSumCount[prefixSum - k];
            }
            prefixSumCount[prefixSum]++;
        }
        return subarrayCount;
    }