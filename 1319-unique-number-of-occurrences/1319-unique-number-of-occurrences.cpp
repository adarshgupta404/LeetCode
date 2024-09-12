class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        set<int> freq;
        for(auto i: mp){
            if(freq.find(i.second) != freq.end()){
                return false;
            }
            freq.insert(i.second);
        }
        return true;
    }
};