class Solution {
    public int removeDuplicates(int[] nums) {
        int j = 0;
        int n = nums.length;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[j]) {
                continue;
            }
            j++;
            nums[j] = nums[i]; 
        }
        return j + 1;
    }
}