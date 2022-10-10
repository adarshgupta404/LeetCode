class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       /* int n= nums.size();
        if(n == 1)
            return nums;
        unordered_map<int, int> m;
        vector<int> v;
        for(int i = 0; i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto e: m)
        {
            if(e.second>n/3)
                v.push_back(e.first);
        }
        return v;
        */
        int cnt1 = 0;
        int cnt2 = 0;
        int maj1 = 0;
        int maj2 = 0; 
for(int n: nums){
    if (n == maj1) 
    {
        cnt1++;
    } 
    else if (n == maj2) 
    {
        cnt2++;
    } 
    else if (cnt1 == 0) 
    {
        maj1 = n;
        cnt1 = 1;
    } 
    else if (cnt2 == 0) 
    {
        maj2 = n;
        cnt2 = 1;
    } 
    else 
    {
        cnt1--;
        cnt2--;
    }
}

        cnt1 = 0;
        cnt2 = 0;
        for(auto e:nums)
        {
            if(maj1==e)
                cnt1++;
            else if(maj2==e)
                cnt2++;
        }
        vector<int> res;
        if (cnt1 > nums.size()/3)   res.push_back(maj1);
        if (cnt2 > nums.size()/3)   res.push_back(maj2);
    return res;
    }
};