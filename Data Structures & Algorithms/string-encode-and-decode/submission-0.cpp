class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for( string str : strs){
            ans += to_string(str.size()) + "^" + str;
        }
        return ans;

    }

    vector<string> decode(string s) {

        vector<string> ans;
        int n = s.size();
        int i = 0;
        while(i<n){
            int j = i;
            //skipping the character and going to the lengths of the word
            //use ' ' for characters and " " for string
            while(s[j] != '^') j++;
            //calculating the length of the word 
            int len = stoi(s.substr(i, j-i));
            //extracting the word using the len
            //the value of j doesnt change here globally 

            ans.push_back(s.substr(j+1, len));//length

            //incrementing i to the next number position;
            i = j+1+len;
        }
        return ans;




    }
};
