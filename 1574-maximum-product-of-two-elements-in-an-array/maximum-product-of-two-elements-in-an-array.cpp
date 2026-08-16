class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int one=nums[n-1];
        int two=nums[n-2];
        int res;

        for(int i=0; i<n;i++){
            res = ((one-1)*(two-1));
        }
        return res;
        }
};