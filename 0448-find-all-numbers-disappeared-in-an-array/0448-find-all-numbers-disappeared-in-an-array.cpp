class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        vector<int> v;
        v.assign(n, -1);
        for(int i = 0; i<n; i++)
        {
            v[nums[i]-1]++;
        }
        for(int i = 0; i<n; i++)
        {
            if(v[i]==-1)
            {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};