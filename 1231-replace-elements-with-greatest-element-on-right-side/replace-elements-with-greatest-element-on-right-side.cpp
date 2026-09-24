class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int n= arr.size();
        int maxRight= arr[n-1];

        ans.push_back(-1);
        for(int i=n-2; i>=0; i--){
            ans.push_back(maxRight);
            if(maxRight < arr[i]){
                maxRight = arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};