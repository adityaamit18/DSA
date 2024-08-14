class Solution {
public:
    // Function to calculate the number of days needed to ship all packages with a given capacity
    int finddays(vector<int>& weights, int cap) {
        int days = 1; // Start counting from the first day
        int load = 0; // Initialize current load to 0
        int n = weights.size(); // Get the size of the weights array

        // Iterate through each weight in the array
        for (int i = 0; i < n; i++) {
            // If adding the current weight exceeds the ship's capacity for the day
            if (load + weights[i] > cap) {
                days = days + 1; // Move to the next day
                load = weights[i]; // Start the new day with the current weight
            } else {
                // Otherwise, add the weight to the current day's load
                load += weights[i];
            }
        }
        return days; // Return the total number of days required
    }

    // Main function to determine the minimum ship capacity required to deliver within the given days
    int shipWithinDays(vector<int>& weights, int days) {
        // Determine the minimum possible capacity (the heaviest package)
        int low = *max_element(weights.begin(), weights.end());

        // Calculate the total sum of all weights to determine the maximum possible capacity
        int high = 0;
        for (auto it : weights) {
            high += it;
        }

        // Binary search to find the minimum capacity that can ship within the given days
        while (low <= high) {
            int mid = (low + high) / 2; // Calculate the middle point
            int numberofDays = finddays(weights, mid); // Calculate the number of days required with this capacity

            // If the number of days is less than or equal to the required days
            if (numberofDays <= days) {
                high = mid - 1; // Try to find a smaller capacity
            } else {
                low = mid + 1; // Increase the capacity
            }
        }
        return low; // Return the minimum capacity found
    }
};
