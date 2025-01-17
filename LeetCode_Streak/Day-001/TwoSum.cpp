/*
1. Two Sum
Solved
Easy
Topics
Companies
Hint
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// int binarySearch(vector<pair<int, int>>& nums, int target) {
//     int start = 0;
//     int end = nums.size() - 1;
//     while(start <= end) {
//         int mid = start + (end - start) / 2;
        
//         if(nums[mid].first == target) {
//             return nums[mid].second;
//         }
//         else if(nums[mid].first < target) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         } 
//     }
//     return -1;
// }


// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<pair<int, int>> indexnum;

//     for(int i = 0; i < nums.size(); i++) {
//         indexnum.push_back({nums[i], i});
//     }

//     sort(indexnum.begin(), indexnum.end());

//     for(int i = 0; i < indexnum.size(); i++) {
//         int leftsum = target - indexnum[i].first;
//         int search = binarySearch(indexnum, leftsum);
//         if(search != -1 && search != indexnum[i].second) {
//             return {indexnum[i].second, search};
//         }
//     }
//     return {};
// }




vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mymap;

    for(int i = 0; i < nums.size(); i++) {
        int left = target - nums[i];

        if(mymap.find(left) != mymap.end()) {
            return {mymap[left], i};
        }

        mymap[nums[i]] = i;
    }
    return {};
}



