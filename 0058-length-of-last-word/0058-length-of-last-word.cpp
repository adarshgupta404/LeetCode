class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        char sp = ' ';
        for(int i = s.length()-1; i>=0; i--)
        {
            if(s[i]==sp)
                continue;
            else
            {
                int temp = i;
                while(temp>=0 && s[temp]!=sp)
                {
                    count++;
                    temp--;
                }
                break;
            }
        }
    return count;
    }
};