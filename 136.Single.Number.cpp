class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
            x ^= *it;

        return x;
    }
};
