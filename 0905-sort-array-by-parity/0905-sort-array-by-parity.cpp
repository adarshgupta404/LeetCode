class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int j = 0;
        for(int i = 0; i<arr.size();i++)
        {
            if(arr[i]%2==0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
        return arr;
    }
};