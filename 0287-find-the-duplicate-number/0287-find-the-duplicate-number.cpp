class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> hmap;
        for (int it : nums) {
            hmap[it]++;
            if (hmap[it] == 2) {
                return it;
            }
        }
        return -1;}
        };