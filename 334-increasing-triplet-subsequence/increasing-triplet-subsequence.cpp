class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first= INT_MAX;
        int second= INT_MAX;
        int third= INT_MAX;

        for(int i=0 ;i<nums.size(); i++){
            int num= nums[i];
            if(first>= num){
                first= num;
            }
            else if(second>= num){
                second= num;
            }
            else{
                third= num;
                return true;
            }
        }
        return false;
    }
};