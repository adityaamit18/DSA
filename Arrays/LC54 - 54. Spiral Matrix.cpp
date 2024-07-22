class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();  // Number of rows
        int m = matrix[0].size();  // Number of columns

        int left = 0; int right = m-1;  // Initialize the left and right boundaries
        int top = 0; int bottom = n-1;  // Initialize the top and bottom boundaries
        vector<int> ans;  // Vector to store the elements in spiral order

        while(top <= bottom && left <= right) {
            // Traverse from left to right along the top row
            for(int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;  // Move the top boundary down, as the top row has been processed

            // Traverse downwards along the right column
            for(int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;  // Move the right boundary left, as the right column has been processed

            // Check if there's still a row to process
            if (top <= bottom) {
                // Traverse from right to left along the bottom row
                for(int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;  // Move the bottom boundary up, as the bottom row has been processed
            }

            // Check if there's still a column to process
            if (left <= right) {
                // Traverse upwards along the left column
                for(int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;  // Move the left boundary right, as the left column has been processed
            }
        }

        return ans;  // Return the elements collected in spiral order
    }
};
