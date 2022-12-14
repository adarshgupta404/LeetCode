class Solution {
public:
    bool isAnagram(string a, string b) {
        if (a==b) return true;
        if (a.size()!=b.size()) return false;
        int arr[26] = {};
        for(int i = 0; i<a.size(); i++)
        {
            arr[a[i]-'a']++;
            arr[b[i]-'a']--;
        }
        for(int i = 0; i<26; i++)
        {
            if(arr[i])
                return false;
        }
        return true;
    }
};