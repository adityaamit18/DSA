class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size()-1;int low = 0;
        while(high>=low){
            int mid = low+(high-low)/2;
            if(nums[mid] > target){
                high = mid-1;
            }
            else if(nums[i] == target){
                return mid;
            }
            else{
                low = mid+1;
            }
        }
        
        return -1;
    }
};

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return i;      
        }
        return -1;
    }
};*/
