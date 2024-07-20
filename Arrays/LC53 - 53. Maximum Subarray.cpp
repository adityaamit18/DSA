//optimal 
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int maxi = nums[0];   
    int sum = 0;   
    for (auto it : nums) {
        // Add the current element to the sum of the current subarray
        sum += it;    
        // Update maxi with the maximum value between the current maxi and sum
        // This ensures that maxi holds the maximum sum encountered so far
        maxi = max(maxi, sum);
        // If sum becomes negative, reset it to 0
        // This is because a negative sum will not contribute to the maximum subarray sum
        // We start a new subarray from the next element
        if (sum < 0) {
            sum = 0;
        }
    }
     return maxi;
}

//Brute 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum += nums[j];
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};
