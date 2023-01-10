class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        unordered_map<string, int> m;
        int indexSum = INT_MAX;
        for(int i = 0; i<list1.size(); i++)
        {
            m[list1[i]] = i;
        }
        for(int i = 0; i<list2.size(); i++)
        {
            if(m.find(list2[i])!=m.end())
            {
                if(m[list2[i]]+i < indexSum)
                {
                    indexSum = m[list2[i]]+i;
                    ans.clear();
                    ans.push_back(list2[i]);
                }
                else if(m[list2[i]]+i == indexSum)
                {
                    ans.push_back(list2[i]);
                }
            }
        }
        return ans;
    }
};