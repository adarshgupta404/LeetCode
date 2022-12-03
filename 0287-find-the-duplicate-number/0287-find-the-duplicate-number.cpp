class Solution {
public:
     int findDuplicate(vector<int>& nums) {
//         // sort the numbers and find the number which has duplicate
//         // by checking the one which has the same at next position
//         sort(nums.begin(), nums.end());
        
//         int duplicate = 0;
//         for(int i = 0; i < nums.size() - 1; i++)
//             if(nums[i] == nums[i+1]) {
//                 duplicate = nums[i];
//                 break;
//             }
//         return duplicate;
//     }
//     int findDuplicate(vector<int>& nums) {
//         return sortingSolution(nums);
//     }
         vector<bool> v(nums.size(), false);
         for(auto i : nums)
         {
             if(v[i])
                 return i;
             v[i] = true;
         }
         return -1;
     }
};