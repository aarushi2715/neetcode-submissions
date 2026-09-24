class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //NAIVE APPROACH

        unordered_map<int, int> mpp;
        for(int num : nums){
            mpp[num]++;

        }
        vector<pair<int, int>> arr;
        for(const auto& p : mpp){
            arr.push_back({p.second, p.first});
        }
        //this is for decsending order sorting
        //sorting in pairs works on lexicographical order 
        //basically see first if equal see second 
        sort(arr.rbegin(), arr.rend());

        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(arr[i].second);
        }

        return res;
    }
};
