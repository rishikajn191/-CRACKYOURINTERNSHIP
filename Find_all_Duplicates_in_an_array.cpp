class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int t=nums[nums.size()-1];
        for(int i=0;i<nums.size()-1; i++){
            if(nums[i]==nums[i+1])
                ans.push_back(nums[i]);
            if(i==nums.size()-1)
                if(nums[i]==t)
                    ans.push_back(t);
        }
        return ans;
    }
};
