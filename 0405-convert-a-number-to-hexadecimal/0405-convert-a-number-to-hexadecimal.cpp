class Solution {
public:
    string convertToHex(long long n) {
        char arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                        '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

        string hex = "";
        while (n > 0) {
            int c = n % 16;
            hex += arr[c]; 
            n /= 16;
        }
        reverse(hex.begin(), hex.end());
        return hex;
    }

    string toHex(int num) {
        if (num == 0) {
            return "0";
        }
        unsigned int n = num; 
        return convertToHex(n);
    }
};