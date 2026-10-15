class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {


        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        //fixing i
        for( int i=0; i<nums.size(); i++){
          
           //duplicate i
           //if is used here becuase continue is used and continue is used becuase we are already incrementing in the for loop
            if (i>0 && nums[i] == nums[i-1]) continue;
            //initializing 2 pointer
            int left = i+1;
            int right = nums.size()-1;

            while(left<right){
                int target = 0;
                //if sum < 0 move right
                if(nums[i]+nums[left]+nums[right] < target){
                    left++;
                }
                //if sum >0 move left
                else if(nums[i]+nums[left]+nums[right] > target){
                    right--;
                }
                else{
                    //when sum = 0
                    ans.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;
                     //for duplicate left and right
                    while(left<right && nums[left] == nums[left-1]) left++;
                    while(left<right && nums[right] == nums[right+1]) right--;
                   
                }
            }

           

        }
         return ans;

        
    }
};
