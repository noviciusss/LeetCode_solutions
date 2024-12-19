class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int max_seen = 0;
        int chunks = 0;
        for (int i = 0; i < arr.size(); i++) {
            max_seen = max(max_seen, arr[i]);
            if (max_seen == i) {
                chunks++;
            }
        }
        return chunks;
    }
};