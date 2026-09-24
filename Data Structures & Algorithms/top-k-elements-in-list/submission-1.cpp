class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //BUCKET SORT 
        //index appears as frequency and we create buckets for each index which will contain the elements which apear that many times 
        unordered_map<int, int> mpp;
        for( int num : nums){
            mpp[num]++;
        }
        vector<vector<int>> buckets(nums.size()+1);//need +1 buckets
        for(auto x : mpp){
            buckets[x.second].push_back(x.first);
            //first is index and the push back is element 
            //[[], [2], [3], [1]]
        }

        vector<int> ans;
        //traversing backwards 
        for( int i=buckets.size()-1; ans.size()<k; i--){
            for( int num : buckets[i]){
                ans.push_back(num);
            }

        }

        return ans;
    }
};
