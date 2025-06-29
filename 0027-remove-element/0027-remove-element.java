class Solution {
    public void swap(int[] nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    public int removeElement(int[] nums, int val) {
        int r = nums.length-1;
        int n = nums.length;
        int i = 0;

        while(i<=r){
            if(nums[i]==val){
                swap(nums, i, r);
                r--;
            }else{
                i++;
            }
        }
        return i;
    }
}