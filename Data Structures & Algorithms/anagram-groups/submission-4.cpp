class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        //wprls only for lowercase 
        unordered_map <string, vector<string>> mpp;

        for(const auto& s : strs){
            //creating hash table
            vector<int> arr(26, 0);
            for(char c : s){
                arr[c-'a']++;
            }
            
            //converting hash table into key string => "1,0,0,1"
            string key = to_string(arr[0]);
            for(int i=1; i<26; i++){
                key += ',' + to_string(arr[i]);
            }
            //every word is converted into the key string and that kwy string is looked for in the map and the word s is added
            mpp[key].push_back(s);
        }

        vector<vector<string>> result;
        //putting it in the desired output format

        for(auto& pair : mpp){
            result.push_back(pair.second);
        }

        return result;
        
    }
};
