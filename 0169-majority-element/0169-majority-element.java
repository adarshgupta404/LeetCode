class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        int n = nums.length;
        for(int num : nums){
            mp.put(num, mp.getOrDefault(num, 0) + 1);
            if(mp.get(num)>n/2)
                return num;
        }
        return -1;

    }
}