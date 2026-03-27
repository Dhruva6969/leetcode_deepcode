class Solution {
    public boolean isPalindrome(int x) {
          int d;
          int x1=x;
          int rev=0;
          while(x>0){
            d=x%10;
            rev=(rev*10)+d;
            x=x/10;
          }
          if(rev==x1){
            return true;
          }
          else{
            return false;
          }
    }
}