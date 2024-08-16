class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        // Initialize MIN and MAX with the first array's first and last elements respectively.
        int MIN = arrays[0].front(); // Smallest element from the first array
        int MAX = arrays[0].back();  // Largest element from the first array
        int ans = 0; // Variable to store the maximum distance found

        // Loop through the remaining arrays starting from the second array (index 1)
        for(int i = 1; i < arrays.size(); i++) {
            // Get the first (minimum) and last (maximum) elements of the current array
            int currMin = arrays[i].front();
            int currMax = arrays[i].back();

            // Calculate the potential maximum distance using current array's elements
            // and the global MIN and MAX from previous arrays.
            // The distance is calculated in two ways:
            // 1. Difference between current minimum and global MAX
            // 2. Difference between current maximum and global MIN
            ans = max({ans, abs(currMin - MAX), abs(currMax - MIN)});

            // Update global MAX with the maximum of the current maximum and the previous global MAX
            MAX = max(MAX, currMax);
            
            // Update global MIN with the minimum of the current minimum and the previous global MIN
            MIN = min(MIN, currMin);
        }
        // Return the maximum distance found
        return ans;
    }
};
