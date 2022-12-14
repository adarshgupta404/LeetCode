class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1(0), rob2(0);
        for(auto num: nums)
        {
            int temp = max(num+rob1, rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        return rob2;
    }
};