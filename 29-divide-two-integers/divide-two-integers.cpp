class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1)    return INT_MAX;
        if(dividend==INT_MIN && divisor==1)    return INT_MIN;

        long long dvd = llabs((long long)dividend), dvs = llabs((long long)divisor);

        int res=0;
        while(dvs<=dvd){
            long long var = dvs, temp =1;
            while(var <= dvd-var){
                var+=var;
                temp+=temp;
            }
            res+=temp;
            dvd -= var;
        }
        if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)){
            return -res;
        }
        return res;
    }
};