class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> v(n, 0);
        vector<int> ans;
        int i=1;
        int idx=0;
        v[idx] = 1;
        while(1){
            if(v[idx]>1){
                break;
            }
            idx= (idx+(i*k))%n;
            v[idx]++;
            i++;
        }
        for(int j=0; j<n; j++){
            if(v[j] == 0){
                ans.push_back(j+1);
            }
        }
        return ans;
    }
};