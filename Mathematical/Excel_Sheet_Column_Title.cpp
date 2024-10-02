class Solution {
public:
    string convertToTitle(int colNum) {
        string ans="";
        while(colNum>0){
            colNum-=1;
            char ch = 'A' + colNum%26;
            ans+=ch;
            colNum/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
