class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid= nums[nums.size()/2];
        long long move=0;
        for(int x:nums){
            move+= abs(x-mid);
        }
        return move;
    }
};