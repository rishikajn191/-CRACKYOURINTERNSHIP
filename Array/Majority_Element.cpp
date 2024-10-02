class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //int min=nums.size()/2;
        int count=1;
        for(int i=0; i<nums.size(); i++){
            if(i==nums.size()-1){
                if(count>nums.size()/2)
                    return nums[i];
            }
            if(nums[i]==nums[i+1]){
                count++;
            }
            if(nums[i]!=nums[i+1]){
                if(count>nums.size()/2)
                    return nums[i];
                else
                    count=1;
            }
        }
        return -1;
    }
};
