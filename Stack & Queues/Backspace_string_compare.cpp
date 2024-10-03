#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:   
    bool backspaceCompare(string s, string t) {
        stack<char> s1,t1;

        for(int i=0; i<s.length(); i++){
            if(s[i]!='#'){
                s1.push(s[i]);
            }
            else if(s[i]=='#' && !s1.empty() ){
                s1.pop();
            }
        }
        for(int i=0; i<t.length(); i++){
            if(t[i]!='#'){
                t1.push(t[i]);
            }
            else if(t[i]=='#' && !t1.empty() ){
                t1.pop();
            }
        }

        string str1="";
        string str2="";
        while(!s1.empty()){
           str1+=s1.top();
           s1.pop();
        }
        while(!t1.empty()){
           str2+=t1.top();
           t1.pop();
        }

        return str1==str2;
    }
};
