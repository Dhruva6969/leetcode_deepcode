class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long pro =1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                return 0;
            }
        }
        int count =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                count++;
            }
        }
        if(count%2==0){
            return 1;
        }
        else{
            return -1;
        }
    }
};