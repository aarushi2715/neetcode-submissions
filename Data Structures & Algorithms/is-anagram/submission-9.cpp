class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size() ){
            return false;
        }
        bool ans = true;

        vector<int> freq(26, 0);
        for( char c : s){
            freq[c-'a']++;

        }
        for( char c : t){
            freq[c-'a']--;
        }

        for( int i=0; i<freq.size(); i++){
            if(freq[i] != 0){
                ans = false;
            }
        }

        return ans;

        
    }
};
