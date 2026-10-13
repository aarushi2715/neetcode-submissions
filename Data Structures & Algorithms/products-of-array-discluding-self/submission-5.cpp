class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        //using prefix sum
        int n = nums.size();
        //main point  
        vector<int> res(n, 1);

        for( int i =1; i<n; i++){
            res[i] = res[i-1]*nums[i-1];
            //this means changing the current i with the product
            //of the last 2 elements which of one has been the product of the two before
        }
        int postfix = 1;//variable
        for( int i=n-1; i>=0; i--){
            res[i]*=postfix;
            postfix*=nums[i];
        }
        return res;

       

    }
};
