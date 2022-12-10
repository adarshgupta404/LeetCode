class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        for(auto &x : arr)
        {
            if(s.count(2*x) || (!(x&1) && (s.count(x/2))))
                return true;
            s.insert(x);
        }
        return false;
    }
};