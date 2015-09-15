class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        size_t idx = digits.size();

        while (idx-- != 0)
        {
            if (digits[idx] == 9)
            {
                digits[idx] = 0;
            }
            else
            {
                digits[idx]++;
                return digits;
            }
        }

        digits[0] = 1;
        digits.push_back(0);

        return digits;
    }
};
