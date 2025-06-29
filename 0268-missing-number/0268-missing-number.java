class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int tsum = (n * (n + 1)) / 2;
        int nsum = nums[0];
        for (int i = 1; i < nums.length; i++) {
            nsum += nums[i];
        }
        return tsum - nsum;
    }
}