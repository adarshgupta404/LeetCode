class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int ecount = 0;
        for(int i = 0; i<nums.size();i++)
        {
            int n = nums[i];
            while(n!=0)
            {
                n /= 10;
                ++ecount;
            }
            if(ecount%2==0)
                count++;
            ecount = 0;
        }
        return count;
    }
};