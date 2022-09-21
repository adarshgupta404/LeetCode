class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> phash(26,0);
        vector<int> hash(26,0);
        int left =0, right = 0;
        int n = s.size();
        int win = p.size();
        if(win>n)
            return ans;
        for(int i = 0; i<win; i++)
        {
            hash[s[i]-'a']++;
            phash[p[i]-'a']++;
            right++;
        }
        right--;
        while(right<n)
        {
            if(phash==hash)
                ans.push_back(left);
            right++;
            if(right!=n)
                hash[s[right]-'a']++;
            hash[s[left]-'a']--;
            left++;
        }
        return ans;
    }
};