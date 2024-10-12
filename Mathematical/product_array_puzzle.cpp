class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        vector<long long int> res;
        
        long long int mulAll=1;
      
        for(int i=0; i<nums.size(); i++){
            mulAll=mulAll*nums[i];
        }
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                long long int mul=1;
                mul = mulAll/nums[i];
                res.push_back(mul);
            }
            else if(nums[i]==0){
                long long int mul=1;
                for(int j=0; j<i; j++){
                    mul=mul*nums[j];
                }
                for(int j=i+1; j<nums.size(); j++){
                    mul=mul*nums[j];
                }
                res.push_back(mul);
            }
        }
        
        return res;
    }
};
