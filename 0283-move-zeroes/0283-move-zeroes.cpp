class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int snowball = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==0)
                snowball++;
            else{
                swap(nums[i], nums[i-snowball]);
            }
        }
    }
};