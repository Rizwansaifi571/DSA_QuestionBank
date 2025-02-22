/*
Maximum Subarray
<Medium>
https://leetcode.com/problems/maximum-subarray/description/

Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
*/

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int maxSum = nums[0];
    
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if(sum > maxSum) {
            maxSum = sum;
        }
        if(sum < 0) {
            sum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum: " << maxSubArray(nums1) << endl; 
    
    vector<int> nums2 = {1};
    cout << "Maximum subarray sum: " << maxSubArray(nums2) << endl; 
    
    vector<int> nums3 = {5, 4, -1, 7, 8};
    cout << "Maximum subarray sum: " << maxSubArray(nums3) << endl; 
    
    return 0;
}