class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int i=0;
        int count=0;
        while(i<arr.size()){
            int sum=0;
            sum+=arr[i];
            if(sum==k){
                count+=1;
            }
            for(int j=i+1; j<arr.size(); j++){
                sum+=arr[j];
                if(sum==k){
                    count+=1;
                }
                
            }
            i++;
        }
        return count;
    }
};
