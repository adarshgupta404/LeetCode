class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> res;
        for(auto n : nums2)
        {
            if(s.count(n))
            {
                res.push_back(n);
                s.erase(n);
            }
        }
        return res;
    }
};