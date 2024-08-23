class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.length(), m=b.length();
        string ans;
        string tmp;
        string carry="0";
        if(n!=m){
            if(n>m){
                for(int i=0; i<n-m; i++){
                    tmp+='0';
                }
                tmp+=b;

                for(int i=n-1; i>=0; i--){
                    if(a[i]==tmp[i] && a[i]==0){
                        if(carry=="0")
                            ans+='0';
                        else
                            ans+='1';
                    }
                
                    else if(a[i]==tmp[i] && a[i]==1){
                        if(carry=="0")
                            ans+='0';
                        else
                            ans+='1';
                        carry="1";
                    }
                    else if(a[i]=='0' && tmp[i]=='1'){
                        if(carry=="0")
                            ans+='1';
                        else{
                            ans+='0';
                            carry="1";
                        }
                    }

                    else if(a[i]=='1' && tmp[i]=='0'){
                        if(carry=="0")
                            ans+='1';
                        else{
                            ans+='0';
                            carry="1";
                        }
                    }
                }
            }
            else{
                for(int i=0; i<m-n; i++){
                    tmp+='0';
                }
                tmp+=a;

                for(int i=n-1; i>=0; i--){
                    if(b[i]==tmp[i] && tmp[i]==0){
                        if(carry=="0")
                            ans+='0';
                        else
                            ans+='1';
                    }
                
                    else if(b[i]==tmp[i] && tmp[i]==1){
                        if(carry=="0")
                            ans+='0';
                        else
                            ans+='1';
                        carry="1";
                    }
                    else if(tmp[i]=='0' && b[i]=='1'){
                        if(carry=="0")
                            ans+='1';
                        else{
                            ans+='0';
                            carry="1";
                        }
                    }

                    else if(tmp[i]=='1' && b[i]=='0'){
                        if(carry=="0")
                            ans+='1';
                        else{
                            ans+='0';
                            carry="1";
                        }
                    }
                }
            }
        }
        else{
            for(int i=n-1; i>=0; i--){
                if(a[i]==b[i] && a[i]==0){
                    if(carry=="0")
                        ans+='0';
                    else
                        ans+='1';
                }
                
                else if(a[i]==b[i] && a[i]==1){
                    if(carry=="0")
                        ans+='0';
                    else
                        ans+='1';
                    carry="1";
                }

                else if(a[i]=='0' && b[i]=='1'){
                    if(carry=="0")
                        ans+='1';
                    else{
                        ans+='0';
                        carry="1";
                    }
                }

                else if(a[i]=='1' && b[i]=='0'){
                    if(carry=="0")
                        ans+='1';
                    else{
                        ans+='0';
                        carry="1";
                    }
                }
            }
        }
        
        ans+=carry;
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
