class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(i==nums.size()-1){
                break;
            }
            if(nums[i]!=nums[i+1]){
                count++;
                nums[count]= nums[i+1];
            }
        }
        // for(int i=count+1; i<nums.size(); i++){
        //     nums.pop_back();
        // }
        return count+1;
    }
};

//------------------------------------------------Solution 2------------------------------------------------
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         // int k=nums.size();
//         int i=0, j=1;
//         while(j<nums.size()){
//             if(nums[i]==nums[j]){
//                 j++;
//             }
//             else{
//                 // i++;
//                 nums[++i]=nums[j++];
//                 // j++;
//                 // k++;
//             }
//         }
//         return i+1;
//     }
// };
