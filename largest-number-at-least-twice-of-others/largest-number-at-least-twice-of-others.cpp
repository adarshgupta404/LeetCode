class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int m1 = 0, m2 = 0;
        int res = -1;
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i]>m1)
            {
                res = i;
                m2 = m1;
                m1 = nums[i];
            }
            else if(nums[i]>m2)
            {
                m2 = nums[i];
            }
        }
        return (m1>=m2*2?res:-1);
    }
};