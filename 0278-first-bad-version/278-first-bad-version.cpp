// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0; 
        int h = n-1;
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            if(!isBadVersion(mid))
                l = mid + 1;
            else
                h = mid - 1;
        }
        return l;
    }
};