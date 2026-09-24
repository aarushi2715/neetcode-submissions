class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        bool ans = true;

        vector<int> arr(26, 0);

        for(int i=0; i<s.length(); i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        //for accessing the value using the index
        for(int i=0; i<arr.size(); i++){
            if(arr[i] != 0){
                ans = false;
            }
        }

        return ans;
        
    }
};
