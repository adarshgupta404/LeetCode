class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if((mid==0 || nums[mid]<nums[mid-1])&&(mid==n-1 || nums[mid]<nums[mid+1]))
                return nums[mid];
            if(nums[mid]>nums[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
        return -1;
    }
};