class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  

        string str = to_string(x);
        int start = 0;
        int end = str.length() - 1;

        while (start < end) {
            if (str[start] != str[end]) {
                return false;
            }
            start++;
            end--;
        }

        return true; 
    }
};
