class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int j = 0;
        // for(int i = 0; i<nums.size(); i++)
        // {
        //     if(nums[i]!=0)
        //         nums[j++] = nums[i];            
        // }
        // for(;j<nums.size();j++)
        //     nums[j] = 0;
        
        // snowball method
        int snowball = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]==0)
                snowball++;
            else if(snowball>0)
            {
                int t = nums[i];
                nums[i] = 0;
                nums[i-snowball] = t;
            }
        }
    }
};