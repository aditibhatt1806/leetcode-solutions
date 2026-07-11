class Solution {
public:
    bool isPalindrome(int x) {
      
        string s = to_string(x);
        string pali = string(s.rbegin(),s.rend());
        if (s == pali )return true ;
        else return false;
    }
};
