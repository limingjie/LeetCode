class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        int m;
        vector<int> result;

        // find first
        while (l <= h)
        {
            m = l + (h - l) / 2;
            if (nums[m] >= target)
            {
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

        if (l >= nums.size() || nums[l] != target)
        {
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }

        result.push_back(l);

        h = nums.size() - 1;

        // find last
        while (l <= h)
        {
            m = l + (h - l) / 2;
            if (nums[m] <= target)
            {
                l = m + 1;
            }
            else
            {
                h = m - 1;
            }
        }

        result.push_back(l - 1);

        return result;
    }
};
