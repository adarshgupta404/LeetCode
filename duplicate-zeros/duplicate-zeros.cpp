class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int shift = count(arr.begin(), arr.end(), 0);
        int n = arr.size();
        for(int i = n-1; i>=0;i--)
        {
            if(!arr[i])
                shift--;
            if(i+shift<n)
                arr[i+shift] = arr[i];
            if(!arr[i] && i+shift+1<n)
                arr[i+shift+1] = 0;
        }
    }
};