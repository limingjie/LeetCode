class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows < 2) return s;

        string *sRow = new string[numRows];

        int len = s.size();
        int step = 1;
        int row = 0;
        int lastRow = numRows - 1;
        for (int i = 0; i < len; i++)
        {
            sRow[row] += s[i];

            if (row == 0)
            {
                step = 1;
            }
            else if (row == lastRow)
            {
                step = -1;
            }

            row += step;
        }

        s.clear();
        for (int i = 0; i < numRows; i++)
        {
            s.append(sRow[i]);
        }

        return s;
    }
};
