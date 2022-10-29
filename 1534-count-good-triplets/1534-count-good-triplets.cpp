class Solution {
public:
    bool isGood(int first, int second, int third, int a, int b, int c) {
        return abs(first-second) <= a && abs(second-third) <= b && abs(first-third) <= c;
    }
    
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();
        int ans = 0;
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                for (int k=j+1; k<n; k++) {
                    if (isGood(arr[i], arr[j], arr[k], a, b, c)) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};