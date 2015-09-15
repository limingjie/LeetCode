class Solution {
public:
    int reverse(int x) {
        if (x == 0) return 0;

        bool negative = false;

        if (x < 0)
        {
            negative = true;
            x = -x;
        }

        long y = 0;
        while (x != 0)
        {
            y = y * 10 + x % 10;
            x /= 10;
        }

        y = negative ? -y : y;

        return (y > INT_MAX || y < INT_MIN) ? 0 : y;
    }
};
