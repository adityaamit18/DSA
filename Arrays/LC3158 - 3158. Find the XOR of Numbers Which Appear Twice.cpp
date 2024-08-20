class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        map<int, int> mpp;

        // Step 1: Count the occurrences of each number in the array.
        for(auto i : nums) {
            mpp[i]++;
        }

        // Step 2: XOR the numbers that appear more than once.
        for(auto it : mpp) {
            if(it.second > 1) {
                ans = ans ^ it.first;
            }
        }

        // Step 3: Return the result.
        return ans;
    }
};
