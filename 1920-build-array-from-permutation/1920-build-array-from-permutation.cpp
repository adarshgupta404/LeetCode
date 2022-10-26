class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        // O(N) time and O(N) space
        int n = nums.size();
        // vector<int> ans(n);
        // for(int i = 0; i<n; i++)
        // {
        //     ans[i] = nums[nums[i]];
        // }
        // return ans;
        
        // O(N) time and O(1) space
        
        for(int i = 0; i<n; i++)
        {
            nums[i] = nums[i] + n*(nums[nums[i]]%n);
        }
        for(int i = 0; i<n; i++)
        {
            nums[i] = nums[i]/n;
        }
        return nums;
    }
};