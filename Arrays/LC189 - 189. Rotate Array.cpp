class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%nums.size();
        if(k==0) return;
        int temp[k];
        for (int i=0;i<k;i++) {
            temp[i]=nums[n-k+i];
        }
        for (int i=n-1;i>=k;i--) {
            nums[i] = nums[i - k];
        }
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }

        // For making it without TEMP
        // reverse(nums.begin(),nums.begin()+n);
        // reverse(nums.begin()+k,nums.begin()+n);
        // reverse(nums.begin(),nums.begin()+k);
    }
};
