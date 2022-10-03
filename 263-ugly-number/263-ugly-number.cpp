class Solution {
public:
    bool isUgly(int n) {
          if (n <= 0) {
            return false;
        }
        int d[] = {2,3,5};
        for(int i = 0; i<3; i++)
        {
            while(n%d[i]==0)
                n/=d[i];
        }
        return n==1;
    }
};