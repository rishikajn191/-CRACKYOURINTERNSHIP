class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++){
            if( haystack[i]==needle[0] ) {
                int t=1;
                int index=i;
                //i++;
                for(int j=0; j<needle.length();j++){
                    if(haystack[i]!=needle[j]){
                        t=-1;
                        break;
                    }
                    i++;
                }
                if(t==1)
                    return index;
                else
                    i=index;
            }
        }
        return -1;      
    }
};
