/*
Maximum Product Subarray
<Medium>
https://leetcode.com/problems/maximum-product-subarray/description/


Given an integer array nums, find a 
subarray
 that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

 

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
 

Constraints:

1 <= nums.length <= 2 * 104
-10 <= nums[i] <= 10
The product of any subarray of nums is guaranteed to fit in a 32-bit integer.
*/

#include <iostream>
#include <vector>
using namespace std;

/*
int negcount(vector<int> nums) {
    int count = 0;
    for(int num : nums) {
        if(num < 0) {
            count++;
        }
    }
    return count;
}

bool zeropresent(vector<int> nums) {
    for(int num : nums) {
        if(num == 0) {
            return true;
        }
    }
    return false;
}


int maxProduct(vector<int>& nums) {
    
    int product = 1;
    int maxProduct = nums[0];
    if(negcount(nums) % 2 == 0 && (!zeropresent(nums))) {
        for(int num : nums) {
            product *= num;
        }
        return product;
    } 

    else if(negcount(nums) % 2 == 0 && (zeropresent(nums))) {
        for(int i = 0; i < nums.size(); i++) {
            product *= nums[i];
            if(maxProduct < product) {
                maxProduct = product;
            }
            if(product == 0) {
                product = 1;
            }
        }
        return maxProduct;
    }

    else if(negcount(nums) % 2 != 0 && (!zeropresent(nums))) {
        for(int i = 0; i < nums.size(); i++) {
            product *= nums[i];
            if(maxProduct < product) {
                maxProduct = product;
            }
            if(i + 1 < nums.size()) {
                if(product < 0 && nums[i + 1] > 0) {
                    product = 1;
                }
            }
        }
        return maxProduct;
    }

    else if(negcount(nums) % 2 != 0 && (zeropresent(nums))) {
        for(int i = 0; i < nums.size(); i++) {
            product *= nums[i];
            if(maxProduct < product) {
                maxProduct = product;
            }
            if(i + 1 < nums.size()) {
                if(product <= 0 && nums[i + 1] > 0) {
                    product = 1;
                }
            }
        }
        return maxProduct;
    }
return -1;
}
*/



int main() {
    vector<int> arr1 = {2, -3, -2, 4};
    cout << maxProduct(arr1) << endl;
    return 0;

}