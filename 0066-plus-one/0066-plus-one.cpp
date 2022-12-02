class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v;
        int n = digits.size();
        int c = 0;
        int s = digits[n-1] + 1;
        for(int i = n-1; i>=0; i--)
        {
            if(digits[i]==9)
                digits[i] = 0;
            else
            {
                digits[i] += 1;
                return digits;
            }
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};