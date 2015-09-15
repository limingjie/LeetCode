class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        size_t nums_size = nums.size();
        size_t size = 1 << nums_size;
        vector<vector<int>> result(size, vector<int>());
        for (size_t i = 0; i < size; i++)
        {
            vector<int> set;
            for (size_t j = 0; j < nums_size; j++)
            {
                if (i & (1 << j))
                {
                    result[i].push_back(nums[j]);
                }
            }
        }

        return result;
    }
};
