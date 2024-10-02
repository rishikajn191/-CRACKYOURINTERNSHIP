class Solution {
public:
    // for checking if given is palindrome
    bool isPalindrome(string s){
        int n=s.length();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i])
              return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n=s.length();

        if(isPalindrome(s))
            return true;
        
        string temp = s;
        int p,q;
        for(int i=0; i<n/2; i++){
            if(s[i]!=s[n-1-i]){
                p=i;
                q=n-1-i;
                break;
            }
        }
        s.erase(p,1);
        if(isPalindrome(s))
            return true;
        s=temp;
        s.erase(q,1);
        if(isPalindrome(s))
            return true;
        return false;
    }
};


