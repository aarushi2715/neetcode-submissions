class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      //binary search
      int left = 0;
      int right = numbers.size()-1;
 


      while(left < right){
        int value = numbers[left] + numbers[right];
        if(value == target){
            return {left+1, right+1};
        }    
        else if(value > target){
            right--;
        }else{
            left++;
        }

      }
       //always place it outside 
      return {};
    }
};
