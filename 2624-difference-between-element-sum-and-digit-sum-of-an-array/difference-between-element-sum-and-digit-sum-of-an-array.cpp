class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        int dSum=0;
        for(int i=0; i<nums.size(); i++){
            int n=nums[i];
            while(n>0){
                dSum+=n%10;
                n/=10;
            }
        }return abs(sum-dSum);
    }
};