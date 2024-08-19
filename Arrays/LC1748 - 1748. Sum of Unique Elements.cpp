class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        // Create a map to count the frequency of each element in the vector
        map<int, int> mpp;
        int sum = 0;  // Initialize sum to 0
        
        // First loop: Count the occurrences of each number in the vector
        for(auto it : nums) {
            mpp[it]++;  // Increment the count of the current number
        }
        
        // Second loop: Iterate over the map to find unique elements (those that appear exactly once)
        for(auto it : mpp) {
            if(it.second == 1) {  // Check if the current number has a frequency of 1
                sum = sum + it.first;  // Add the number to the sum if it's unique
            }
        }
        
        // Return the final sum of unique elements
        return sum;
    }
};
