//arr = [2, 3, 4, 7, 11] and k = 5
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n = arr.size();  // n = 5
        int low = 0, high = n - 1;  // low = 0, high = 4

        // Binary search to find the position where the k-th missing number would fall
        while (low <= high) {
            int mid = (high + low) / 2;  // 1st iteration: mid = (4 + 0) / 2 = 2
            int missing = arr[mid] - (mid + 1);  // missing = arr[2] - (2 + 1) = 4 - 3 = 1

            if (missing < k) {
                low = mid + 1;  // 1st iteration: missing < k (1 < 5), so low = mid + 1 = 3
            } else {
                high = mid - 1;
            }
        }

        // 2nd iteration: low = 3, high = 4
        // mid = (4 + 3) / 2 = 3
        // missing = arr[3] - (3 + 1) = 7 - 4 = 3

        if (missing < k) {
            low = mid + 1;  // 2nd iteration: missing < k (3 < 5), so low = mid + 1 = 4
        } else {
            high = mid - 1;
        }

        // 3rd iteration: low = 4, high = 4
        // mid = (4 + 4) / 2 = 4
        // missing = arr[4] - (4 + 1) = 11 - 5 = 6

        if (missing < k) {
            low = mid + 1;  // 3rd iteration: missing > k (6 > 5), so high = mid - 1 = 3
        } else {
            high = mid - 1;
        }

        // Binary search ends, now we calculate the k-th missing number
        // k + low = 5 + 4 = 9

        return k + low;  // The k-th missing positive number is 9
    }
};



//========================================================================

/*class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missingNumbers;
        int n = arr.size();
        int arrIndex = 0;

        // Iterate from 1 to a large enough number
        for (int i = 1; missingNumbers.size() < k; i++) {
            // If current number i is in arr, skip it
            if (arrIndex < n && arr[arrIndex] == i) {
                arrIndex++;
            } else {
                // If i is not in arr, it's a missing number
                missingNumbers.push_back(i);
            }
        }

        // The kth missing number will be at index k-1
        return missingNumbers[k - 1];
    }
};*/
