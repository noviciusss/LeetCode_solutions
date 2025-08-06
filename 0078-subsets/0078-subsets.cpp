class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int ns = 1 << n;
        vector<vector<int>> allSubsets;
        for (int i = 0; i < ns; ++i) {
            vector<int> currentSubset;
            for (int j = 0; j < n; ++j) {
                if ((i & (1 << j)) != 0) {
                    currentSubset.push_back(nums[j]);
                }
            }
            allSubsets.push_back(currentSubset);
        }
        return allSubsets;
    }
};