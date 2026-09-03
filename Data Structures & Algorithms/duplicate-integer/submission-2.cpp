class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int count;
        bool ans = false;
        unordered_map<int, int> m;

        for(int i=0; i<nums.size(); i++){
           if(m.find(nums[i])!= m.end()){
            ans = true;
           }
           m[nums[i]] = 1;

        }
        

        return ans;
    }
};