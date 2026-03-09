class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n = nums.size();
        // int ans = (nums[n-1]-1) * (nums[n-2]-1);
        // return ans;
        priority_queue<int>pt(nums.begin(),nums.end());
        int num1 = pt.top()-1;
        pt.pop();
        int num2 = pt.top()-1;
        return num1*num2;

    }
};