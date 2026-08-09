class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        vector<int> square(n);

        for(int i=n-1;i>=0;i--){
            if(abs(nums[low])>abs(nums[high])){
                square[i]=nums[low] * nums[low];
                low++;
            }
            else{
                square[i]=nums[high] * nums[high];
                high--;
            }
        }
        return square;
    }
};