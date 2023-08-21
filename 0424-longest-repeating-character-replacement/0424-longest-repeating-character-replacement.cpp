class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(128, 1);
        int maxl = 0;
        if(s.size()==0)
            return 0;
        int l = 0, r = 0;
        for(int r = 0; r<s.size(); r++){
            maxl = max(maxl, v[s[r]]++);
            if(r-l+1-maxl>k)
                v[s[l++]]--;
        }
        return s.size()-l;
    }
};