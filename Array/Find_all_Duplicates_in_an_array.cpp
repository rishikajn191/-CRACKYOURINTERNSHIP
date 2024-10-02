// ---------------------------Solution 1---------------------------------
//     Time Complexity=O(N)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int x=abs(nums[i]);
            if(nums[x-1]<0){
                ans.push_back(x);
            }
            nums[x-1]*=-1;
        }
        return ans;
    }
};

// ---------------------------Solution 2---------------------------------
//     Time Complexity=O(NlogN)
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> ans;
//         sort(nums.begin(),nums.end());
//         int t=nums[nums.size()-1];
//         for(int i=0;i<nums.size()-1; i++){
//             if(nums[i]==nums[i+1])
//                 ans.push_back(nums[i]);
//             if(i==nums.size()-1)
//                 if(nums[i]==t)
//                     ans.push_back(t);
//         }
//         return ans;
//     }
// };
