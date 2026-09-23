class Solution {
public:
    bool isAnagram(string s, string t) {
        //using hash table or array 

        if(s.length() != t.length()){
            return false;
        }
        //for mixed case
        for(char c : s ){
            c = tolower(c);
        }

        for( char c : t){
            c = tolower(c);
        }
        
        vector<int> count(26, 0);

        for(int i=0; i<s.length(); i++){
            //converting ascii values to 0 -25
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
