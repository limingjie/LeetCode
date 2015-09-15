class Solution {
public:
    void reverseWords(string &s) {
        string dest;

        size_t word_end = 0;
        size_t word_start = s.size();
        bool first = true;

        while (true)
        {
            word_end = s.find_last_not_of(' ', word_start);
            if (word_end != string::npos)
            {

                if (!first)
                    dest.push_back(' ');
                else
                    first = false;

                word_start = s.find_last_of(' ', word_end);
                if (word_start == string::npos)
                {
                    for (size_t i = 0; i <= word_end ; i++)
                    {
                        dest.push_back(s[i]);
                    }

                    break;
                }
                else
                {
                    for (size_t i = word_start + 1; i <= word_end ; i++)
                    {
                        dest.push_back(s[i]);
                    }
                }
            }
            else
            {
                break;
            }
        }

        s = dest;
    }
};
