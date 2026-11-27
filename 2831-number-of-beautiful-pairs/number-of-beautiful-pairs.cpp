class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n= nums.size(), count = 0;
        for(int i=0; i<n; i++){
            int temp=0;
            while(nums[i]!=0){
                temp=nums[i]%10;
                nums[i]/=10;
            }
            for(int j=i+1; j<n; j++){
                if(__gcd(temp, nums[j]%10) == 1){
                    count++;
                }
            }
        }
        return count;
    }
};