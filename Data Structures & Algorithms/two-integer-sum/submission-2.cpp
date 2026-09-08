class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //complement + hashmap pattern
        unordered_map<int, int> indices;
        //val->index
        for(int i=0; i<nums.size(); i++){
            indices[nums[i]] = i;
        }
        for(int i=0; i<nums.size(); i++){
            int diff = target-nums[i];
            if(indices.count(diff) && indices[diff] != i){
                return {i, indices[diff]};
            }
        }

        return {};

        
    }
};
