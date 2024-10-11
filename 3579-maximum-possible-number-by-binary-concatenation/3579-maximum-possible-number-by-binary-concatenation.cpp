class Solution {
public:
    string convertToBinary(int num) {
        if (num == 0)
            return "0";
        string n = "";
        while (num > 0) {
            n = (char)(num % 2 + '0') + n;
            num /= 2;
        }
        return n;
    }
    int decimal(string s) {
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            res = res * 2 + (s[i] - '0');
        }
        return res;
    }
    int maxGoodNumber(vector<int>& nums) {
        string n1 = convertToBinary(nums[0]);
        string n2 = convertToBinary(nums[1]);
        string n3 = convertToBinary(nums[2]);
        return max({
            decimal(n1 + n2 + n3),
            decimal(n1 + n3 + n2),
            decimal(n2 + n1 + n3),
            decimal(n2 + n3 + n1),
            decimal(n3 + n1 + n2),
            decimal(n3 + n2 + n1),
        });
    }
};