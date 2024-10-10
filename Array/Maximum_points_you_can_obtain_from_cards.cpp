class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum=0;
        int rightSum=0;
        for(int i=0; i<k; i++){
            leftSum+= cardPoints[i];
        }
        int Points= leftSum;
        int j=cardPoints.size()-1;
        for(int i=k-1; i>=0; i--){
            leftSum-= cardPoints[i];
            rightSum+= cardPoints[j];
            j--;
            Points= max(Points, leftSum+rightSum);
        }
        return Points;
    }
};
