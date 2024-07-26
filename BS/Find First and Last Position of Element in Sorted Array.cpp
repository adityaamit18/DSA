#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int first = -1;
        
        // Find the first occurrence of the target
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                first = mid;       // Target found, record the position
                high = mid - 1;    // Move to the left half to find the first occurrence
            } else if (nums[mid] < target) {
                low = mid + 1;     // Move to the right half
            } else {
                high = mid - 1;    // Move to the left half
            }
        }

        // Reset low and high for the second search
        low = 0;
        high = n - 1;
        int last = -1;
        
        // Find the last occurrence of the target
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                last = mid;        // Target found, record the position
                low = mid + 1;     // Move to the right half to find the last occurrence
            } else if (nums[mid] < target) {
                low = mid + 1;     // Move to the right half
            } else {
                high = mid - 1;    // Move to the left half
            }
        }

        // Return the indices of the first and last occurrences
        return {first, last};
    }
};
/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        auto lb=lower_bound(nums.begin(),nums.end(),target);
        auto ub=upper_bound(nums.begin(),nums.end(),target);

        if (lb == nums.end() || *lb != target) {
            return {-1, -1};  // Target not found
        }
        int first= lb- nums.begin();
        int last= ub - nums.begin() -1 ;
        return {first,last};
    }
};
*/

/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1 , last =-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(first==-1) first=i;
                last = i;
            }
        }
        return {first,last};
    }
};
*/
