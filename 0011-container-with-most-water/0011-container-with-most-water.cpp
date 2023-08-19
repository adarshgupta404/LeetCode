class Solution {
public:
    int maxArea(vector<int>& height) {
        // Brute Force 
        // int area, res = 0;
        // for(int l = 0; l<height.size(); l++){
        //     for(int r = height.size()-1; r>=0; r--){
        //         area = (r-l)*min(height[l], height[r]);
        //         res = max(res, area);
        //     }
        // }
        // return res;

        // Two Pointer Method
        int l = 0, r = height.size()-1, res = INT_MIN, area;
        while(l<r){
            area = (r-l)*min(height[l], height[r]);
            res = max(res, area);
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return res;
    }
};