class Solution {
public:
    int reverse(int x) {
        long long revNum=0;

        while(x!=0){
            int rev= x%10;
            revNum= (revNum*10)+ rev;
            x/=10;
        }
        if(revNum > INT_MAX || revNum < INT_MIN){
            return 0;
        }
        return (int)revNum;
    }
};