class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int v[n+1];
        for(int i = 0; i<=n;i++)
            v[i] = -1;
        int miss = -1;
        for(int i = 0; i<nums.size();i++)
            v[nums[i]] = nums[i];
        for(int i = 0; i<nums.size(); i++)
        {
            if(v[i]==-1)
                miss = i;
        }
        if(miss==-1)
            miss = nums.size();
        return miss;
    }
};