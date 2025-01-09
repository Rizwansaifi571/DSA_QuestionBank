/*
Running Sum of 1d Array
<Easy>
https://leetcode.com/problems/running-sum-of-1d-array/description/

Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 

Constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6


*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    int sum = 0;
    int size = nums.size();

    for(int i = 0; i < size; i++) {
        sum += nums[i];
        nums[i] = sum;
    }
    return nums;
}

void print(vector<int> nums) {
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 1, 1, 1, 1};
    runningSum(arr);
    print(arr);
    return 0;
}