class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, c = 0, v = nums[0];
        for(auto num : nums){
            if(v == num){
                c++;
                v = num;
            }else{
                c = 1;
                v = num;
            }
            if(c<=2){
                nums[i] = v;
                i++;
            }
        }
        return i;
    }
};