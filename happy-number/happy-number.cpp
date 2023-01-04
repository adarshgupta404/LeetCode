class Solution {
public:
    int nextEl(int n)
    {
        int totalsum = 0;
        while(n)
        {
            int d = n%10;
            n /= 10;
            totalsum += (d*d);
        }
        return totalsum;
    }
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1 && !s.count(n))
        {
            s.insert(n);
            n = nextEl(n);
        }
        return n==1;
    }
};