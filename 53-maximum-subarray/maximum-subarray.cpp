class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int low=0;
        int res=nums[0];
        int sum=0;
        for(int high=0;high<nums.size();high++){
            sum+=nums[high];
            res=max(res,sum);
            

            
            if(sum<0){
                sum=0;
                low=high+1;
            }
        }
    return res;
    }
};