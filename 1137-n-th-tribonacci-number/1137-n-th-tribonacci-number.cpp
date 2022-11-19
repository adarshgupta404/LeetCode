class Solution {
public:
    int tribonacci(int n) {
        int T3;
        if(n==0)
            return 0;
        else if(n==1||n==2)
            return 1;
        else{
            int n1 = 0, n2 = 1, n3 = 1, ntemp = n1 + n2 + n3;
            for(int i = 4; i<=n;i++)
            {
                n1 = n2;
                n2 = n3;
                n3 = ntemp;
                ntemp = n1 + n2 + n3;
            }
            return ntemp;
        }
    }
};