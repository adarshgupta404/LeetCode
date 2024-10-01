class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans[] = {INT_MIN,0};
        for(int i = 0; i<nums.size(); i++){
            if(ans[0]<nums[i]){
                ans[0] = nums[i];
                ans[1] = i;
            }
        }
        return ans[1];
    }
};