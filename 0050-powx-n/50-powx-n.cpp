class Solution {
public:
    double myPow(double x, int n) {
        long long nn = abs(n);
        double ans = 1.0;
        if(n==0)
            return 1;
        while(nn)
        {
            if(nn%2)
            {
                ans = x*ans;
                nn--;
            }
            else
            {
                x = x*x;
                nn /= 2;
            }
        }
        if(n<0)
        {
            ans = (double)(1.0)/(double)(ans);
        }
        return ans;
        
    }
};