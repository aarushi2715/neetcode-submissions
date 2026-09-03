class Solution {
public:
    bool isAnagram(string s, string t) {
        //using hash table or array 

        if(s.length() != t.length()){
            return false;
        }
        
        vector<int> count(26, 0);

        for(int i=0; i<s.length(); i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;

        }

        for(int x : count){
            if(x != 0){
                return false;
            }
        }
        return true;
    }
};
