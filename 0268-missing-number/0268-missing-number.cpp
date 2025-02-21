class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int nsum = 0;
        for(int i = 0; i<n; i++){
            nsum += nums[i];
        }
        return sum-nsum;
    }
};