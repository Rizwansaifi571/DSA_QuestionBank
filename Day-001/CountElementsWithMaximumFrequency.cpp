/*
Count Elements With Maximum Frequency
<Easy>
https://leetcode.com/problems/count-elements-with-maximum-frequency/description/



You are given an array nums consisting of positive integers.

Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

The frequency of an element is the number of occurrences of that element in the array.

 

Example 1:

Input: nums = [1,2,2,3,1,4]
Output: 4
Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
So the number of elements in the array with maximum frequency is 4.
Example 2:

Input: nums = [1,2,3,4,5]
Output: 5
Explanation: All elements of the array have a frequency of 1 which is the maximum.
So the number of elements in the array with maximum frequency is 5.
 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // Sort the array
    
    int maxFreq = 0;
    int currentFreq = 1;
    int count = 0;

    // Traverse the sorted array
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            currentFreq++; // If the current element is the same as the previous one, increment the frequency
        } else {
            if (currentFreq == maxFreq) {
                count += currentFreq; // Add the frequency to the total count
            }
            if (currentFreq > maxFreq) {
                maxFreq = currentFreq; // Update max frequency
                count = currentFreq; // Reset count to the current frequency
            }
            currentFreq = 1; // Reset frequency for the new element
        }
    }
    
    // Check for the last element group
    if (currentFreq == maxFreq) {
        count += currentFreq;
    } else if (currentFreq > maxFreq) {
        count = currentFreq;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 1, 4};
    vector<int> nums2 = {1, 2, 3, 4, 5};
    vector<int> nums1 = {10, 12, 11, 9, 6, 19, 11};
    
    cout << maxFrequencyElements(nums) << endl;  // Output: 4
    cout << maxFrequencyElements(nums1) << endl; // Output: 2
    cout << maxFrequencyElements(nums2) << endl; // Output: 5
    
    return 0;
}
