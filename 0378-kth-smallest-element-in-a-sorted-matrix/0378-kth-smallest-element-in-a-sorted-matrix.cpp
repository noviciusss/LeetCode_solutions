class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>one;
        for (const auto& innerVector : matrix) {
         for (int num : innerVector) {
            one.push_back(num);
        }}
        sort(one.begin(),one.end());
        return one[k-1];
    
    }
};