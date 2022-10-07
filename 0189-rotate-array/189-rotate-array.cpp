class Solution {
public:
    void reverse(vector<int>& nums, int l, int h)
    {
        while(l<=h)
        {
            int temp = nums[l];
            nums[l] = nums[h];
            nums[h] = temp;
            l++;
            h--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        /*O(n) space Approacch
        int rot[n];
        int t = n-k;
        int i;
        for(i = 0; i<k; i++)
        {
            rot[i] = nums[t];
            t++;
        }
        int j = 0;
        for(i = k; i<n; i++)
        {
            rot[i] = nums[j++];
        }
        for(int m = 0; m<n;m++)
        {
            nums[m] = rot[m];
        }
    }*/
        // O(n) time and O(1) space
        if(n<k)
            k = k%n;
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }
};