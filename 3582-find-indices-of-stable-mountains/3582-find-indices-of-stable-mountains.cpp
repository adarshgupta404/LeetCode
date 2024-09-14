class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> result;
        int n = height.size();
        for (int i = 0; i < n - 1; i++) {
            if (height[i] > threshold) {
                result.push_back(i + 1);
            }
        }
        return result;
    }
};