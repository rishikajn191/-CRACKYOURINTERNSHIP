class Solution {
public:
    void moveZeroes(vector<int>& a) {
        vector<int> ans(a.size(),0);
        int j=0;
        for(int i=0; i<a.size(); i++){
            if(a[i]!=0){
                ans[j]=a[i];
                j++;
            }
        }
        for(int i=0; i<a.size(); i++){
            a[i]=ans[i];
        }
    }
};
