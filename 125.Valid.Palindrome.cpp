class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        size_t size = s.size();

        // remove chars other than alpha number
        for(int i = 0; i < size; ++i)
        {
            if (isalnum(s[i])) temp.push_back(toupper(s[i]));
        }

        // check palindrome
        size = temp.size();

        for(int i = 0; i < size / 2; ++i)
        {
            if (temp[i] != temp[size - 1 - i]) return false;
        }

        return true;
    }
};
