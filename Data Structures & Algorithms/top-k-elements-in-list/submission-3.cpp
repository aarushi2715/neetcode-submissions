class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mpp;
        for(int num : nums){
            mpp[num]++;
        }

        vector<vector<int>>buckets(nums.size()+1);
        
            for(auto x : mpp){
                buckets[x.second].push_back(x.first);
            }
        
        
        vector<int> ans;
        for(int i = buckets.size()-1; ans.size()<k; i--){
           for(int i : buckets[i]){
            ans.push_back(i);
           }
        }

        return ans;
        
    }
};
