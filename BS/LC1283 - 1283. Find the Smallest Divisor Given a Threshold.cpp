class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1; 
        int high = *max_element(nums.begin(), nums.end()); // Set the upper bound to the maximum value in nums

// Perform binary search to find the smallest divisor
    while (low < high) {
    int mid = (low + high) >> 1; // Find the midpoint
    int sum = 0; // Accumulate the division results

    // Calculate the sum of divisions by mid
    for (int num : nums) {
        sum += (num + mid - 1) / mid; // Use ceiling division
    }

    if (sum <= threshold) {
        high = mid; // Mid might be the answer, reduce the search space
    } else {
        low = mid + 1; // Increase the divisor
    }
}

return low; // The smallest valid divisor

    }
};
