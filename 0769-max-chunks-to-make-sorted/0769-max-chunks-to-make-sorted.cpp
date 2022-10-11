class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxn = arr[0];
        int res = 0;
        for(int i = 0; i<arr.size(); i++)
        {
            maxn = max(maxn, arr[i]);
            if(maxn==i)
                res++;
        }
        return res;
    }
};