//better
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());

        
        int longest = 1;
        int cnt = 0;
        int lastSmaller = INT_MIN;

        for(int i = 0; i < nums.size(); i++) {
            // If the current number is exactly 1 more than the last valid number, it's consecutive.
            if(nums[i] - 1 == lastSmaller) {
                cnt += 1;  // Increment the current sequence length.
                lastSmaller = nums[i];  // Update the last valid number.
            }
            // If the current number is not the same as the last valid number (handle duplicates).
            else if(lastSmaller != nums[i]) {
                cnt = 1;  // Reset the current sequence length.
                lastSmaller = nums[i];  
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};

/*====================*/
//optimal
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        
        unordered_set<int> st;
        int longest = 1; // Initialize the variable to store the longest consecutive sequence length.

        for(int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        for(auto it : st) {
            // Check if 'it - 1' is not present in the set to find the start of a sequence.
            if(st.find(it - 1) == st.end()) {
                int cnt = 1; // Initialize the count for the current sequence.
                int x = it; // Start with the current element.

                // Check for consecutive elements.
                while(st.find(x + 1) != st.end()) {
                    x = x + 1; // Move to the next consecutive element.
                    cnt = cnt + 1; 
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};
