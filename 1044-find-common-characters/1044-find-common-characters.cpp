class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minfreq(26, INT_MAX);
        for(auto word : words){
            vector<int> freq(26, 0);
            for(auto c : word){
                freq[c-'a']++;
            }
            for(int i = 0; i<26; i++){
                minfreq[i] = min(minfreq[i], freq[i]);
            }
        }

        vector<string> ans;
        for(int i = 0; i<26; i++){
            for(int j = 0; j<minfreq[i]; j++){
                ans.push_back(string(1, 'a' + i));
            }
        }
        return ans;
    }
};