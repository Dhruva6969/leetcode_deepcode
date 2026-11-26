class Solution {
public:
    long long coloredCells(int n) {
        long long res = 1;
        for(int i=2; i<=n; i++){
            res+= 4LL* (i-1);
        }
        return res;
    }
};