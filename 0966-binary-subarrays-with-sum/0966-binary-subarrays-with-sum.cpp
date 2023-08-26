class Solution {
public:
    int atMost(vector<int>& nums, int goal){
        int win_st = 0, win_end = 0, res = 0, cnt = 0;
        if(goal<0)  return 0;
        for(win_end = 0; win_end<nums.size(); win_end++){
            cnt += nums[win_end];
            while(cnt>goal){
                cnt -= nums[win_st];
                win_st++;
            }
            res += win_end - win_st + 1;
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // Hash Map Approach O(n) Time and O(n) Space
        // int n = nums.size();
        // int sum = 0;
        // int count = 0;
        // unordered_map<int, int> m;
        // for(int i = 0; i<n; i++){
        //     sum += nums[i];
        //     if(sum==goal)
        //         count++;
        //     if(m.find(sum-goal)!=m.end()){
        //         count += m[sum-goal];
        //     }
        //     if(m.find(sum)!=m.end()){
        //         m[sum]++;
        //     }
        //     else
        //         m[sum] = 1;
        // }
        // return count;  
        // Sliding Window Approach O(n) Time and O(1) Space
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};