class Solution {
    public void moveZeroes(int[] nums) {
        int snowball = 0;
        int n = nums.length;
        if(n<=1)
            return;
        for(int i = 0; i<n; i++){
            if(nums[i]==0){
                snowball++;
            }else{
                int temp = nums[i];
                nums[i] = nums[i-snowball];
                nums[i-snowball] = temp;
                
            }
        }
    }
}