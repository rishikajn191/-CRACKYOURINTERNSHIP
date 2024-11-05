class Solution {
public:
    int Ones(int num){
        int cnt=0;
        while(num!=0){
            int r = num%2;
            if(r==1)
                cnt++;
            num/=2;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> temp;
        for(int i=0; i<=n; i++)
            temp.push_back(Ones(i));
        return temp;
    }
};
