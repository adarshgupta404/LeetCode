class Solution {
public:
    int maxSubArray(vector<int>& nums) {
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