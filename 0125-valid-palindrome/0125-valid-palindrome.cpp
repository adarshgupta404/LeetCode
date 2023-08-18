class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, end = s.length();
        while(st<=end){
            if(!isalnum(s[st])){
                st++; continue;
            }
            if(!isalnum(s[end])){
                end--; continue;
            }
            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            else{
                st++, end--;
            }
        }
        return true;
    }
};