class Solution {
public:
    bool isPalindrome(string s) {
        string s1;

        for (char c : s) {
            if (isalnum(static_cast<unsigned char>(c))) {
                s1.push_back(tolower(static_cast<unsigned char>(c)));
            }
        }

        string s2 = s1;
        reverse(s2.begin(), s2.end());

        return s1 == s2;
    }
};
//isalnum is preferqred to check alphanumeric characters