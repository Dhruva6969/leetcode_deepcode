class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mini= nums[0], maxi= nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>mini && nums[i]<maxi)  return nums[i];
            mini = min(nums[i], mini);
            maxi = max(maxi, nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=mini && nums[i]!=maxi){
                return nums[i];
            }
        }
        return -1;
    }
};