class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lrow = 0, hrow = matrix.size()-1;
        while(lrow<hrow){
            int mid = lrow + (hrow-lrow)/2;
            if(matrix[mid][0]==target)
                return true;
            if(matrix[mid][0]<target && matrix[mid+1][0]>target){
                lrow = mid;
                break;
            }
            if(matrix[mid][0]<target)
                lrow = mid + 1; 
            else
                hrow = mid - 1;
        }
        int l = 0, h = matrix[0].size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if (matrix[lrow][mid] == target) 
                return true;
            if(matrix[lrow][mid]<target){
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }
        return false;
    }
};