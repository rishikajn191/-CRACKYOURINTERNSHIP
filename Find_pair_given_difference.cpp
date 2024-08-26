class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        unordered_set<int> seen;
        for(int i = 0; i < n; i++) {
            int p = x + arr[i];
            int q = arr[i] - x;
            if(seen.count(p) || seen.count(q)) {
                return 1;
            }
            seen.insert(arr[i]);
        }
        return -1;
    }
};
