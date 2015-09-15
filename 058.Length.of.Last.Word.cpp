class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx = s.size() - 1;
        int cnt = 0;

        // trim trailing spaces
        while (idx >= 0 && s[idx] == ' ') idx--;

        while (idx >= 0 && s[idx] != ' ')
        {
            idx--;
            cnt++;
        }

        return cnt;
    }
};
