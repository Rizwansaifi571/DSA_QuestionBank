/*
875. Koko Eating Bananas
<Medium>
https://leetcode.com/problems/koko-eating-bananas/

Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

 

Example 1:

Input: piles = [3,6,7,11], h = 8
Output: 4
Example 2:

Input: piles = [30,11,23,4,20], h = 5
Output: 30
Example 3:

Input: piles = [30,11,23,4,20], h = 6
Output: 23
 

Constraints:

1 <= piles.length <= 104
piles.length <= h <= 109
1 <= piles[i] <= 109

*/

#include <iostream>
#include <vector>
using namespace std;

long long check(vector<int> &nums, int mid) {
        long long reqh = 0;
        for(int num : nums) {
            reqh += (num % mid != 0 ? (num / mid) + 1 : num / mid); 
        }
        return reqh;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = piles[0];
        for(int banana : piles) {
            maxi = max(banana, maxi);
        }

        int start = 1, end = maxi, result;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            long long total_h = check(piles, mid);
            if(total_h <= h) {
                result = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
        return result;