class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> uglyNumbers(1, 1);
        int index2 = 0, index3 = 0, index5 = 0;

        while (uglyNumbers.size() < n) {
            uglyNumbers.push_back(min(uglyNumbers[index2] * 2, min(uglyNumbers[index3] * 3, uglyNumbers[index5] * 5)));
            if (uglyNumbers.back() == uglyNumbers[index2] * 2) index2++;
            if (uglyNumbers.back() == uglyNumbers[index3] * 3) index3++;
            if (uglyNumbers.back() == uglyNumbers[index5] * 5) index5++;
        }
        return uglyNumbers.back();
    }
};
