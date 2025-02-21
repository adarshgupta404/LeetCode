class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==1){
                cnt++;
            }else{
                cnt = 0;
            }
            maxCount = max(maxCount, cnt);
        }
        return maxCount;
    }
};