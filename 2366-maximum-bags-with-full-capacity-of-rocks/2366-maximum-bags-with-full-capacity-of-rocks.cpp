class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks,
                    int additionalRocks) {
        int n = capacity.size();
        int count = 0;
        vector<int> remain(n);
        for (int i = 0; i < n; i++) {
            remain[i] = capacity[i] - rocks[i];
        }
        sort(remain.begin(), remain.end());
        for (int i = 0; i < n; i++) {
            if (remain[i]<=additionalRocks) {
                additionalRocks = additionalRocks - remain[i];
                count++;
            }else{
                break;
            }
        }
        return count;
    }
};