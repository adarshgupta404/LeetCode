class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size()-1;
        int n = nums.size();
        while(l<h)
        {
            int mid = (l+h)/2;
            if(nums[mid]>nums[h]) 
                l = mid + 1;
            else
                h = mid;
        }
        int rot = l;
        l = 0, h = n-1;
        while(l<=h)
        {
            int mid = (l+h)/2;
            int realmid = (mid+rot)%n;
            if(nums[realmid]==target)
                return realmid;
            if(nums[realmid]<target)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return -1;
    }
};