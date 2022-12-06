class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> s;
        int n = INT_MIN;
        for(int i = nums.size()-1; i>=0; i--)
        {
            if(n>nums[i])
                return true;
            else
                while(s.empty()==false && s.top()<nums[i])
                {
                    n = s.top();
                    s.pop();
                }
            s.push(nums[i]);
        }
        return false;
    }
};