class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        for (int num : numSet){
            //if num-1 is not found in the hash table then the sequence 
            //will start from this number 
            if(numSet.find(num-1) == numSet.end()){
                int length =1;
            //check if the next number is also present in the hashset
            //if it is then length ++
            //otherwise the length will be 1 and then we will start
            // this process for the next number 
                while(numSet.find(num+length) != numSet.end()){
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
