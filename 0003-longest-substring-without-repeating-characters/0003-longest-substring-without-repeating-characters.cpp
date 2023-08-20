class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        // Brute Force Approach
        // unordered_set<char> set;
        // int l = 0, r = 0, res = 0;
        // while(r<n){
        //     while(set.find(s[r])!=set.end()){
        //         set.erase(s[l]);
        //         l++;
        //     }
        //     set.insert(s[r]);
        //     res = max(res, r-l+1);
        //     r++;
        // }
        // return res;

        //Optimized Solution
        vector<int> v(256,-1);
        int l = 0, r = 0, res = 0;
        while(r<n){
            if(v[s[r]]!=-1){
                l = max(l, v[s[r]]+1);
            }
            v[s[r]] = r;
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};