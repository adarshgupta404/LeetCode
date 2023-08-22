class Solution {
public:
    bool ispermutation(vector<int>& count){
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int> count(26);
        int m = s1.size(), n = s2.size();
        if(m>n) return false;
        for(int i = 0; i<m; i++){
            count[s1[i]-'a']++;
            count[s2[i]-'a']--;
        }
        if(ispermutation(count))
            return true;
        for(int i = m; i<n; i++){
            count[s2[i]-'a']--;
            count[s2[i-m]-'a']++;
            if(ispermutation(count))
                return true;
        }
        return false;
    }
};