class Solution {
    public int[] findIntersectionValues(int[] nums1, int[] nums2) {
        int i = 0;
        int j = 0;
        int m = nums1.length;
        int n = nums2.length;
        HashSet<Integer> s1 = new HashSet<>();
        HashSet<Integer> s2 = new HashSet<>();
        for(int num : nums1){
            s1.add(num);
        }
        for(int num : nums2){
            s2.add(num);
        }
        int c1 = 0, c2 = 0;
        for(int num : nums1){
            if(s2.contains(num))
                c1++;
        }
        for(int num : nums2){
            if(s1.contains(num))
                c2++;
        }
        return new int[]{c1, c2};
    }
}