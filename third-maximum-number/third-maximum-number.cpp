class Solution {
public:
    int thirdMax(vector<int>& arr) {
        long long int max1(LLONG_MIN), max2(LLONG_MIN), max3(LLONG_MIN);
        int n = arr.size();
        for(int i = 0; i<n; i++)
        {
            if (arr[i] <= max3 || arr[i] == max2 || arr[i] == max1) continue;
            max3 = arr[i];
            if (max3 > max2) swap(max3, max2);
            if (max2 > max1) swap(max1, max2);
        }
        
        return max3 == LLONG_MIN ? max1 : max3;
    }
};