class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int count;
        bool ans = false;
        //i can use unordered set for just figuring out if array element is in it or not. i dont need key value pairs
        unordered_set<int> s;

        for(int i=0; i<nums.size(); i++){
           if(s.find(nums[i])!= s.end()){
            ans = true;
            break;
           }
           //for adding elements in sets
           s.insert(nums[i]);

        }
        

        return ans;
    }
};