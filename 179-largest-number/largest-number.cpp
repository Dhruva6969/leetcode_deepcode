class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        for(int num : nums){
            arr.push_back(to_string(num));
        }

        sort(arr.begin(), arr.end(), [](const string& s1, const string& s2){
            return s1+s2 > s2+s1;
        });

        if(arr[0] == "0"){
            return "0";
        }
        string ans;
        for(const string& s : arr){
            ans +=s;
        }
        return ans;
    }
};