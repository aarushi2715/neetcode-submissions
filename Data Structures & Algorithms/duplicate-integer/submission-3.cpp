class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int count;
        bool ans = false;
        unordered_set<int> s;

        for(int i=0; i<nums.size(); i++){
           if(s.find(nums[i])!= s.end()){
            ans = true;
            break;
           }
           s.insert(nums[i]);

        }
        

        return ans;
    }
};