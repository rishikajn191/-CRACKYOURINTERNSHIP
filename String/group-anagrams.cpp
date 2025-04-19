class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        
        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end()); // we are sorting each word
            mpp[word].push_back(x);  // after sorting if it.first matches then pushing original string at it.second . 
        }
        
        // simply iterating through map and taking all the it.second & putting into the  ans.
        vector<vector<string>> ans;
        for(auto x: mpp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
