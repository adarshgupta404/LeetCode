class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = -1, b = -1;
        for(int i = 0; i<nums.size(); i++)
        {
            if(target == nums[i] && a==-1)
                a = i;
            if(a!=-1 && target == nums[i])
                b = i;
        }
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        return v;
    }
};