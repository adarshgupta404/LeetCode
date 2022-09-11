class Solution {
public:
    int reverse(int x) {
        int a = 0;
        while(x)
        {
            if(a>INT_MAX/10 || a<INT_MIN/10)
            {
                return 0;
            }
            else
            {
                a=a*10 +x%10;
                x=x/10;
            }
        }
        return a;
    }
};