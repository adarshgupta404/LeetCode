class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        else if(n==1||n==2)
            return 1;
        else{
            int n1 = 0, n2 = 1, n3 = n1 + n2;
            for(int i = 3; i<=n;i++)
            {
                n1 = n2;
                n2 = n3;
                n3 = n1+n2;
            }
            return n3;
        }
        
    }
};