class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int Max= nums[0];
        int currMax= nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]< nums[i]){
                currMax+= nums[i];
            }
            else{
                Max= max(currMax, Max);
                currMax= nums[i];
            }
        }
        Max= max(currMax, Max);
        return Max;
    }
};