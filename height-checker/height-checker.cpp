class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v(heights);
        int ni = 0;
        sort(heights.begin(), heights.end());
        for(int i = 0; i<heights.size();i++)
        {
            if(v[i]!=heights[i])
                ni++;
        }
        return ni;
    }
};