class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length())
            return false;
        int[] st = new int[26];
        for (char i : s.toCharArray()) {
            st[(int) i - 'a']++;
        }
        for (char i : t.toCharArray()) {
            st[(int) i - 'a']--;
        }
        for (int i : st) {
            if (i != 0)
                return false;
        }
        return true;
    }
}