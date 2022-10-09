class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        // O(n) time and O(n)pace
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i = 0; i<n;i++)
        {
            m[nums[i]]++;
        }
        int maj= 0;
        for(auto e: m)
        {
            if(e.second>n/2)
                maj = e.first;
        }
        return maj;
    }*/
        // O(n) time and O(1) space
        unordered_map<int, int> m;
        int n = nums.size();
        int cnt = 1;
        int maj = nums[0];
        for(int i = 1; i<n; i++)
        {
            if(cnt == 0)
            {
                cnt++;
                maj = nums[i];
            }
            else if(maj==nums[i])
                cnt++;
            else
                cnt--;
        }
        return maj;
    }
};