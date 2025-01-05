/*
Removing Minimum and Maximum From Array
<Medium>

link : https://leetcode.com/problems/removing-minimum-and-maximum-from-array/description/


You are given a 0-indexed array of distinct integers nums.

There is an element in nums that has the lowest value and an element that has the highest value. We call them the minimum and maximum respectively. Your goal is to remove both these elements from the array.

A deletion is defined as either removing an element from the front of the array or removing an element from the back of the array.

Return the minimum number of deletions it would take to remove both the minimum and maximum element from the array.

 

Example 1:

Input: nums = [2,10,7,5,4,1,8,6]
Output: 5
Explanation: 
The minimum element in the array is nums[5], which is 1.
The maximum element in the array is nums[1], which is 10.
We can remove both the minimum and maximum by removing 2 elements from the front and 3 elements from the back.
This results in 2 + 3 = 5 deletions, which is the minimum number possible.
Example 2:

Input: nums = [0,-4,19,1,8,-2,-3,5]
Output: 3
Explanation: 
The minimum element in the array is nums[1], which is -4.
The maximum element in the array is nums[2], which is 19.
We can remove both the minimum and maximum by removing 3 elements from the front.
This results in only 3 deletions, which is the minimum number possible.
Example 3:

Input: nums = [101]
Output: 1
Explanation:  
There is only one element in the array, which makes it both the minimum and maximum element.
We can remove it with 1 deletion.

*/

#include <iostream>
using namespace std;

int getMin(int arr[], int size) {
    int min = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < arr[min]) {
            min = i;
        }
    }
    return min;
}


int getMax(int arr[], int size) {
    int max = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] > arr[max]) {
            max = i;
        }
    }
    return max;
}

int minmaxRemove(int arr[], int size) {
    int min = getMin(arr, size);
    int max = getMax(arr, size);
    
    int ans1 = 0;
    int ans2 = 0;
    int ans3 = 0;



    // delet from front
    if(min > max) {
        ans1 = min + 1;
    } else {
        ans1 = max + 1;
    }

    // from rare end
    if(min > max) {
        ans2 = size - max;
    } else {
        ans2 = size - min;
    }

    // from front and rare both
    if(min > max) {
        ans3 = (max + 1) + (size - min);
    } else {
        ans3 = (min + 1) + (size - max);
    }

    int arr1[3] = {ans1, ans2, ans3};
    int result = getMin(arr1, 3);

    return arr1[result];

    
}

int main () {
    
    int arr[8] = {2,10,7,5,4,1,8,6};
    int arr1[8] = {0,-4,19,1,8,-2,-3,5};
    cout << minmaxRemove(arr, 8) << endl;
    cout << minmaxRemove(arr1, 8) << endl;

    return 0;
}




// chatgpt version correction
/*
int minmaxRemove(int arr[], int size) {
    int minIdx = getMinIndex(arr, size);
    int maxIdx = getMaxIndex(arr, size);

    // Ensure minIdx is always smaller than maxIdx for calculations
    if (minIdx > maxIdx) swap(minIdx, maxIdx);

    // Three possible ways to remove both elements:
    int removeFromFront = maxIdx + 1;                 // Remove elements from the front
    int removeFromBack = size - minIdx;               // Remove elements from the back
    int removeFromBoth = (minIdx + 1) + (size - maxIdx); // Remove from both sides

    // Return the minimum of these three strategies
    return min(removeFromFront, min(removeFromBack, removeFromBoth));
}
*/