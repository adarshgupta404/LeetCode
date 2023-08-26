class Solution {
public:
    void kadane(vector<int>& nums, int n){
        int sum = nums[0];
        for(int i = 1; i<n; i++){
            sum += nums[i];
            nums[i] = sum;
        }
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        kadane(nums, n);
        int count = 0;
        unordered_map<int, int> m;
        for(int i = 0; i<n; i++){
            if(nums[i]==goal)
                count++;
            if(m.find(nums[i]-goal)!=m.end()){
                count += m[nums[i]-goal];
            }
            if(m.find(nums[i])!=m.end()){
                m[nums[i]]++;
            }
            else
                m[nums[i]] = 1;
        }
        return count;      
    }
};