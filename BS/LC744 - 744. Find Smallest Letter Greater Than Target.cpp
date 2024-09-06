class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = letters.size() - 1;

        // Binary search to find the smallest element greater than the target
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (letters[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // If no element is greater, return the first element (since the array is circular)
        if(left < letters.size()){
            return letters[left];
        }
        else {
            return letters[0]; // Return the first element because we have gone past the array size

        }
    }
};
