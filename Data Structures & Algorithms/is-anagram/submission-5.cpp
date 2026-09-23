class Solution {
public:
    bool isAnagram(string s, string t) {
        
        bool ans = false;
        if(s.size() != t.size()){
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if( s == t){
            ans = true;;
        }
        return ans;
        
    }
};
