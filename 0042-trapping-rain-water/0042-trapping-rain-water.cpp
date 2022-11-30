class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        int res = 0;
        int lmax[n];
        int rmax[n];
        lmax[0] = arr[0];
        rmax[n-1] = arr[n-1];
        for(int i = 1; i<n-1; i++)
        {
            lmax[i] = max(lmax[i-1],arr[i]); 
        }
        for(int i = n-2; i>=0; i--)
        {
            rmax[i] = max(rmax[i+1],arr[i]); 
        }
        for(int i = 1; i<n-1; i++)
        {
            res = res + (min(lmax[i],rmax[i]) - arr[i]);
        }
        return res;
    }
};