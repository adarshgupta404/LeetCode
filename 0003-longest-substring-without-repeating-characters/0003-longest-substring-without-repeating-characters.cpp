class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        // Brute Force Approach
        unordered_set<char> set;
        int l = 0, r = 0, res = 0;
        while(r<n){
            while(set.find(s[r])!=set.end()){
                set.erase(s[l]);
                l++;
            }
            set.insert(s[r]);
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};