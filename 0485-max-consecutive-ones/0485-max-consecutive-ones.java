class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int c = 0;
        int maxC = 0;
        if (nums.length == 1) {
            return nums[0];
        }
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1) {
                c++;
            } else {
                c = 0;
            }
            maxC = Math.max(c, maxC);
        }
        return maxC;
    }
}