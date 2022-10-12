class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> t = arr;
        sort(t.begin(), t.end());
        long s1 = 0, s2 = 0;
        int res = 0;
        for(int i = 0; i<arr.size();i++)
        {
            s1+=t[i];
            s2+=arr[i];
            if(s1==s2)
                res++;
        }
        return res;
    }
};