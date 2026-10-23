class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> s;
        int ans = false;
        for( int i=0; i<nums.size(); i++){
            if(s.find(nums[i]) != s.end() ){
                ans = true;
        
            }

            s.insert(nums[i]);
        }
        return ans;


        
    }
};