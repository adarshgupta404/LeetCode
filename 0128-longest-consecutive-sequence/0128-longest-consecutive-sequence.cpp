class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0, length = 0;

        for(auto& n : s)
            if(s.find(n-1)==s.end()){ // (n-1) is not in set
                length = 1;
                while(s.find(n+length)!=s.end()) // (n+1) is in set
                    length++;
                longest = max(length, longest);
            }
        return longest;
    }
};