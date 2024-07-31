class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        //arr[i-1]<arr[i]>arr[i+1]
        
        while(low<high){
            int mid = (high+low)/2;
            if (nums[mid] > nums[mid + 1]) {
                // The peak element is in the left half (including mid)
                high = mid;
            } else {
                // The peak element is in the right half
                low = mid + 1;
            }
        }
        // low and high will converge to the peak element
        return low;

        
        // for(int i=0;i<nums.size();i++){
        //     if((i==0 || nums[i-1]<nums[i]) && (i==nums.size()-1|| nums[i]>nums[i+1])) return i;
        // }
        // return -1;
    }
};
