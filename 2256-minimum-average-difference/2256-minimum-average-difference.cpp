class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long rightsum = 0, leftsum = 0;
        int mAD = INT_MAX;
        int index;
        int n = nums.size();
        for(auto &it: nums)
            rightsum += it;
        for(int i = 0; i<n; i++)
        {
            leftsum += nums[i];
            rightsum -= nums[i];
            int a = (i==n-1)? 0 : rightsum/(n-i-1);
            int b = leftsum/(i+1);
            if(abs(a-b)<mAD)
            {
                mAD = abs(a-b);
                index = i;
            }
        }
        return index;
    }
};