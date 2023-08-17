class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto& it : m){
            bucket[it.second].push_back(it.first);
        }
        for(int i = nums.size(); i>0; i--){
            if(k==0) return res;
            for(int j = 0; j<bucket[i].size(); j++){
                res.push_back(bucket[i][j]);
                k--;
            }
        }
        return res;
    }
};