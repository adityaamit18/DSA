class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //we will find lower bound
        auto lb=lower_bound(nums.begin(),nums.end(),target);
        int ans= lb - nums.begin();
        return ans;
    }
};
