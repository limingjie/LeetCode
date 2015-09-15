class Solution {
public:
    vector<int> stringToVector(string s)
    {
        vector<int> v;
        size_t size = s.size();
        for (size_t i = 0; i < size; ++i)
            v.push_back(s[size - i - 1] - '0');

        return v;
    }

    string multiply(string num1, string num2) {
        vector<int> a = stringToVector(num1);
        vector<int> b = stringToVector(num2);
        vector<int> m;

        size_t size_a = a.size();
        size_t size_b = b.size();
        size_t size_m = size_a + size_b;

        m.reserve(size_m);
        for (size_t i = 0; i < size_m; ++i)
            m[i] = 0;

        for (size_t j = 0; j < size_b; ++j)
        {
            for (size_t i = 0; i < size_a; ++i)
            {
                m[i + j] += a[i] * b[j];
            }
        }

        int v;
        for (size_t i = 0; i < size_m; ++i)
        {
            v = m[i] / 10;
            m[i] %= 10;
            if (v > 0) m[i + 1] += v;
        }

        int i;
        for (i = size_m - 1; i > 0; --i)
        {
            if (m[i] != 0)
            {
                break;
            }
        }
        size_m = i + 1;

        string s;
        for (size_t i = 0; i < size_m; ++i)
            s.push_back(m[size_m - i - 1] + '0');

        return s;
    }
};
