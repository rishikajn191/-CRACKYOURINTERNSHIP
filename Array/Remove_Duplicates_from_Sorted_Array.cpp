class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int k=nums.size();
        int i=0, j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                // i++;
                nums[++i]=nums[j++];
                // j++;
                // k++;
            }
        }
        return i+1;
    }
};
