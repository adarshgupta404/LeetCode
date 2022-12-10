class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        int j =0;
        for(int i = 1; i<n; i++)
        {
            if(nums[i]==nums[i-1])
            {
                j++;
            }
            else
            {
                nums[i-j] = nums[i];
            }
        }
        return nums.size()-j;
    }
};