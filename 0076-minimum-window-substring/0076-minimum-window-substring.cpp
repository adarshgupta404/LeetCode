class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> m;
        for(int i = 0; i<t.size(); i++)
            m[t[i]]++;
        int i = 0, j = 0;
        int counter = t.size();
        int minS = 0, minL = INT_MAX;
        while(j<s.size()){
            if(m[s[j]]>0)
                counter--;
            m[s[j]]--;
            j++;
            while(counter==0){
                m[s[i]]++;
                if(m[s[i]]>0)
                    counter++;
                if(j - i < minL){
                    minS = i;
                    minL = j - i;
                }
                i++;
            }
        }
        if(minL!=INT_MAX)
            return s.substr(minS, minL);
        return "";
    }
};