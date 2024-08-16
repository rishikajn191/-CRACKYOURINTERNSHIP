//-----------------------------------------Solution 1-----------------------------
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                int t=0;
                for(int j=i+1; j<nums.size(); j++){
                    if(nums[j]!=0){
                        t=nums[j];
                        nums[j]=0;
                        break;
                    }
                }
                nums[i]=t;
            }
        }
    }
};

//-----------------------------------------Solution 2-----------------------------
// class Solution {
// public:
//     void moveZeroes(vector<int>& a) {
//         vector<int> ans(a.size(),0);
//         int j=0;
//         for(int i=0; i<a.size(); i++){
//             if(a[i]!=0){
//                 ans[j]=a[i];
//                 j++;
//             }
//         }
//         for(int i=0; i<a.size(); i++){
//             a[i]=ans[i];
//         }
//     }
// };
