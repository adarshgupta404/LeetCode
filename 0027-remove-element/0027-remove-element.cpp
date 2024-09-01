class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0, end = nums.size();
        while(index < end){
            if(nums[index] == val){
                nums[index] = nums[end-1];
                end--;
            }
            else{
                index++;
            }
        }
        
        return index;
    }
};