class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> a1;
        vector<int> a2;
        vector<int> a3;
        vector<int> result;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]< pivot){
                a1.push_back(nums[i]);
            }else if(nums[i] == pivot){
                a2.push_back(nums[i]);
            }
            else if(nums[i]> pivot){
                a3.push_back(nums[i]);
            }
        }
        result.insert(result.end(), a1.begin(), a1.end());
        result.insert(result.end(), a2.begin(), a2.end());
        result.insert(result.end(), a3.begin(), a3.end());

        return result;
    }
};