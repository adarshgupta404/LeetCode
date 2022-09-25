class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        else if (nums.size() == 1) return nums[0];
        int gsum = nums[0], csum = nums[0];
        int n = nums.size();
        for(int i = 1; i<n; i++)
        {
            csum += nums[i];
            csum = max(csum, nums[i]);
            gsum = max(gsum, csum);
        }
        return gsum;
    }
};