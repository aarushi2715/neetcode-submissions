class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left =0;
        int right = heights.size()-1;

        int ans = INT_MIN;

        while(left < right){
            int currArea  =  min( heights[left], heights[right]) * (right-left);
            ans = max(ans, currArea);

            if(heights[left] < heights[right]){
                left++;
            }else{
                right--;
                //cobine 2 conditions
                //right<left and right ==  left
            }
        }
        return ans;
    }
};
