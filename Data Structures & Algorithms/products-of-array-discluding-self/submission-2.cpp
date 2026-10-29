class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int prefix[nums.size()];
        int suffix[nums.size()];

        prefix[0] = 1;
        for(int i = 1; i < n; i++){
            prefix[i] = nums[i-1] * prefix[i-1];
        }

        suffix[n-1] = 1;
        for(int i = n-2; i >= 0; i--){
            suffix[i] = nums[i+1] * suffix[i+1];
        }

        for(int i = 0; i < n; i++){
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;

        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         if(i != j){
        //             ans[i] *= nums[j]; 
        //         }
        //     }
        // }
        // return ans;

    }
};
