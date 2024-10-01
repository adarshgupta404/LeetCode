class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, h = nums.size()-1;
        while(l<h){
            int mid = (l+h)/2;
            if(nums[mid]<nums[mid+1]){
                l = mid + 1;
            }else{
                h = mid;
            }
        }
        return l;
        // int ans[] = {INT_MIN,0};
        // for(int i = 0; i<nums.size(); i++){
        //     if(ans[0]<nums[i]){
        //         ans[0] = nums[i];
        //         ans[1] = i;
        //     }
        // }
        // return ans[1];
    }
};