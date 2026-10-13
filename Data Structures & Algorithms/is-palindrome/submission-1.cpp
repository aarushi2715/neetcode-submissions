class Solution {
public:
    bool isPalindrome(string s) {
      
       //SC = O(n);
        
        string ans = "";

        for (char c : s ){
            if(isalnum(c)){
                ans+=tolower(c);
            }
        }
          if (ans.empty()) return true;
         int n = ans.length();
      
        int i=0;
        int j=n-1;
     

  
        
        while(i<j){  
            if(ans[i] != ans[j]){
                cout<<ans[i] <<" "<<ans[j]; 
                return false;     
            }
            i++;
            j--;
        }
        return true;
        
    }
};
