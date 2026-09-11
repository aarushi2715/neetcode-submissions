class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mpp;

        for(const auto& s : strs){
            string sS = s;
            sort(sS.begin(), sS.end());
            mpp[sS].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& pair : mpp){
            result.push_back(pair.second);
        }
        return result;
    }
};
