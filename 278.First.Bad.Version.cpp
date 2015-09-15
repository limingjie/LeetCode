// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        if (n < 2) return n;

        int i = 1;
        while (i <= n)
        {
            int mid = i + (n - i) / 2;
            if (isBadVersion(mid))
            {
                n = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }

        return i;
    }
};
