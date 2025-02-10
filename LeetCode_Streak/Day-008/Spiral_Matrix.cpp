/*
54. Spiral Matrix
<Medium>
https://leetcode.com/problems/spiral-matrix/description/

Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    vector<int> ans;
    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count < total) {

        //Print STarting Row
        for(int i = startingCol; count < total && i <= endingCol; i++) {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        //Print Ending Column
        for(int i = startingRow; count < total && i <= endingRow; i++) {
            ans.push_back(matrix[i][endingCol]);
            count++;

        }
        endingCol--;

        //Print Ending Row
        for(int i = endingCol; count < total && i >= startingCol; i--) {
            ans.push_back(matrix[endingRow][i]);
            count++;

        }
        endingRow--;

        //Print Starting Column
        for(int i = endingRow; count < total && i >= startingRow; i--) {
            ans.push_back(matrix[i][startingCol]);
            count++;

        }
        startingCol++;
    } 
    
    return ans;