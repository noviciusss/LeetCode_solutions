class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int mini =INT_MAX;
        int tempMin = INT_MAX;

        int ans = nums[0];
        for(int i=1;i<nums.size();i++){
            int temp = nums[i];
            if(temp<mini){
            tempMin = mini;
            mini = temp;
            }
            else if(temp<tempMin){
                tempMin = temp;
            }
        }
        return ans+mini+tempMin;
    }
};