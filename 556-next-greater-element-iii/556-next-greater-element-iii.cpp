#include<string.h>
class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        if(s.length()==1)
            return -1;
        int i = s.length()-2;
        while(i>=0 && s[i]>=s[i+1])
            i--;
        if(i==-1)
            return -1;
        int j = s.length()-1;
        while(j>i && s[j]<=s[i])
            j--;
        swap(s[i],s[j]);
        reverse(s.begin()+i+1, s.end());
        long next = stol(s);
        return next == n || next > INT_MAX ? -1 : next;
    }
};