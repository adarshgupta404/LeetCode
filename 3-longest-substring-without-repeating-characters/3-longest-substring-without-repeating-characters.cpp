class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int arr[256] = {0};
        int res = 0;
        for(int h = 0; h<n; h++)
        {
            arr[s[h]]++;
            while(arr[s[h]]>1)
            {
                arr[s[l]]--;
                l++;
            }
            res = max(res, h-l+1);
        }
        return res;
    }
};