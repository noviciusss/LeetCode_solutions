class Solution {
public:
    int ans(vector<int>& nums, int goal) {
        if (goal < 0) {
            return 0;
        }
        int l = 0;
        int cnt = 0;
        int sum = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum > goal) {
                sum -= nums[l];
                l++;
            }
            cnt = cnt + (right - l + 1);
        }
        return cnt;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return ans(nums, goal) - ans(nums, goal - 1);
    }
};