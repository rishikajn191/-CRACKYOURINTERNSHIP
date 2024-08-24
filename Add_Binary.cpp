class Solution {
public:
    string addBinary(string a, string b) {
        string ans = ""; 
        string carry = "0";

        //  adding leading zeros
        int n = a.length();
        int m = b.length();
        if (n < m)
            a.insert(0, m-n, '0');
        else if (m < n)
            b.insert(0, n-m, '0');

        cout<<"a= "<<a<<" b="<<b;
        if(n<m)
            n=m;
        else
            m=n;

        int i=n-1;
        while(i>=0){
            if(a[i]==b[i] && a[i]=='0'){
                //0+ (0+0)
                if(carry=="0")
                    ans+='0';
                //1+ (0+0)
                else{
                    ans+='1';
                    carry="0";
                }    
            }
            else if(a[i]==b[i] && a[i]=='1'){
                //0+ (1+1)
                if(carry=="0"){
                    ans+='0';
                    carry="1";
                } 
                //1+ (1+1)  
                else
                    ans+='1';
            }
            else if(a[i]=='1' && b[i]=='0'){
                // 0 +(1+0)
                if(carry=="0")
                    ans+='1';
                // 1 +(1+0)    
                else
                    ans+='0';
            }
            else if(a[i]=='0' && b[i]=='1'){
                // 0 +(0+1)
                if(carry=="0")
                    ans+='1';
                // 1 +(0+1)
                else
                    ans+='0';
            }
            if(i==0)
                break;
            i--;
        }
    
        if(carry=="1")
            ans+=carry;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
