class Solution {
public:
    string getKey(string str){
        vector<int> v(26,0);
        for(int i = 0; i<str.length(); i++){
            v[str[i]-'a']++;
        }
        string key = "";
        for(int i = 0; i<v.size(); i++){
            key.append(to_string(v[i]+'$'));
        }
        return key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(int i=0; i<strs.size(); i++){
            string key = getKey(strs[i]);
            m[key].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto& it : m){
            res.push_back(it.second);
        }
        return res;
    }
};