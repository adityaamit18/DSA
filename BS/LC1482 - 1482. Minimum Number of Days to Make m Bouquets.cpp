class Solution {
public:
    // This function checks if it's possible to make 'm' bouquets on a given 'day'
    // with each bouquet requiring 'k' consecutive flowers.
    bool possible(vector<int>& arr, int day, int m, int k) {
        int n = arr.size(); // Get the size of the array
        int cnt = 0; // Count of consecutive flowers that can be picked on the given day
        int noOfB = 0; // Number of bouquets that can be formed

        // Iterate over each element in the array
        for (int i = 0; i < n; i++) {
            // If the flower blooms on or before the given day, increment count
            if (arr[i] <= day) {
                cnt++;
            } 
            // If not, calculate the number of bouquets formed so far and reset count
            else {
                noOfB += (cnt / k); // Count how many full bouquets can be made with 'cnt' flowers
                cnt = 0; // Reset the count since flowers are not consecutive
            }
        }

        // After the loop, add any remaining bouquets that can be formed
        noOfB += (cnt / k);
        // Return true if the total number of bouquets formed is greater than or equal to 'm'
        return noOfB >= m;
    }

    // This function finds the minimum number of days required to make 'm' bouquets
    // with each bouquet requiring 'k' consecutive flowers.
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1ll * k * 1ll; // Calculate the total number of flowers required
        int n = bloomDay.size(); // Get the size of the array

        // If the total number of flowers required is more than available flowers, return -1
        if (val > n) return -1;

        int mini = INT_MAX, maxi = INT_MIN; // Initialize the minimum and maximum bloom days

        // Find the minimum and maximum days in the bloomDay array
        for (int i = 0; i < n; i++) {
            mini = min(mini, bloomDay[i]); // Minimum bloom day
            maxi = max(maxi, bloomDay[i]); // Maximum bloom day
        }

        int low = mini, high = maxi; // Set the initial search range for binary search

        // Perform binary search to find the minimum day
        while (low <= high) {
            int mid = (low + high) / 2; // Calculate the mid-point day

            // Check if it's possible to make 'm' bouquets by 'mid' day
            if (possible(bloomDay, mid, m, k)) {
                high = mid - 1; // If possible, try an earlier day (reduce the search space)
            } else {
                low = mid + 1; // If not possible, try a later day (increase the search space)
            }
        }
        // Return the first day on which it's possible to make 'm' bouquets
        return low;
    }
};
