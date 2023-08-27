class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // Brute Force TLE O(N*K) time & O(1) space
        vector<int> res;
        int n = nums.size();
        // int maxn = INT_MIN;
        // for(int i = 0; i<n-k+1; i++){
        //     for(int j = i; j<i+k; j++){
        //         maxn = max(maxn, nums[j]); 
        //     }
        //     res.push_back(maxn);
        //     maxn = INT_MIN;
        // }
        deque<int> dq;
        int j = 0;
        for(int i = 0; i<n; i++){
            while(!dq.empty() && nums[dq.back()]<nums[i])
                dq.pop_back();
            dq.push_back(i);
            if(j>dq.front())
                dq.pop_front();
            if(i+1 >= k){
                j++;
                res.push_back(nums[dq.front()]);
            }
        }
        return res;
    }
};