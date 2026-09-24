class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


//REVISION 1
        unordered_map<string, vector<string>> mpp;

        for( const auto& word : strs){

            vector<int> freq(26, 0);
            for(char c: word ){
                freq[c-'a']++;
            }
            string key = to_string(freq[0]);
            for(int i=0; i<26; i++){
                key += ',' + to_string(freq[i]);
            }

            mpp[key].push_back(word);

        }

        vector<vector<string>> ans;
        for(auto& pair : mpp){
            ans.push_back(pair.second);
        }

        return ans;

       

     
    }
};
