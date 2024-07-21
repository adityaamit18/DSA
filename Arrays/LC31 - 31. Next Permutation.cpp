class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    
    }
};

/*--------------------------------------------*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();

        // Step 1: Find the largest index 'ind' such that nums[ind] < nums[ind + 1]
        // This identifies the point where we need to perform the next permutation change
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // Step 2: If no such index exists, the permutation is the last permutation.
        // Reverse the entire array to get the first permutation.
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the largest index 'i' greater than 'ind' such that nums[i] > nums[ind]
        // This is to find the element that will replace the nums[ind] to form the next permutation
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                // Step 4: Swap the values at 'ind' and 'i'
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 5: Reverse the sequence from ind + 1 to the end to get the next smallest lexicographic permutation
        reverse(nums.begin() + ind + 1, nums.end());
    }
};
