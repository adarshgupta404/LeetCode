class Solution {
public:
    string baseNeg2(int n) {
        string str = "";
        while(n){
            str = to_string(n & 1) +str;
            cout<<n;
            n = -(n>>1);
        }
        return str == "" ? "0" : str;
    }
};