class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<int,int> bucket;
        if (secret.size() != guess.size() || secret.empty()) { 
            return "0A0B"; 
        }
        int cow = 0, bull = 0;
        for(int i = 0; i<secret.length(); i++)
        {
            if(secret[i]==guess[i])
                bull++;
            else{
                bucket[secret[i]]++;
                bucket[guess[i]]--;
            }
        }
        for(auto x : bucket)
        {
            if(x.second>0)
             cow = cow + x.second;
        }
        cout<<cow;
        cow = secret.length() - bull  - cow;
        string a = to_string(bull);
        string b = to_string(cow);
        string c = a + 'A' + b + 'B';
        return c;
    }
};