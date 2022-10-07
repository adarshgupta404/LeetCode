class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int i = 0; 
        int j = nums.size()-1;
        vector<int> res(nums.size());
        for(int k = nums.size()-1; k>=0;k--)
        {
            if(abs(nums[i])>abs(nums[j]))
            {
                res[k] = nums[i]*nums[i];
                i++;
            }
            else
            {
                res[k] = nums[j]*nums[j];
                j--;
            }
        }
        return res;
    }
};