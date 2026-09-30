class Solution {
public:

    string encode(vector<string>& strs) {
        
        string encoded_s = "";
        for( string s : strs){
            int len = s.size();
            encoded_s += to_string(len)+"#"+s;

        }
  
        return encoded_s;

    }

    vector<string> decode(string s) {
       vector<string> ans;
       int n= s.size();
       int i=0;
       while(i<n){
        int j=i;
        while(s[j] != '#') j++;
            
            int len = stoi(s.substr(i, j-i));
            ans.push_back(s.substr(j+1, len));
            
            i = j+1+len;


        
       }

       return ans;

    }
};
