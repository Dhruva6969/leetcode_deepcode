class Solution {
public:
    bool isPalindrome(const string& s, int low, int high)
 {
       
        int len= high-low+1;
        if (low >= high)
            return true;

        if(s[low] != s[high]){
            return false;
        }
        return isPalindrome(s, low+1, high-1);
    }

        bool isPalindrome(string s){

        string t = "";
        for (char c : s) {
            if (isalnum(c)) {
                t += tolower(c);
            }
        }
        return isPalindrome(t, 0, t.size() - 1);
    }
    
};