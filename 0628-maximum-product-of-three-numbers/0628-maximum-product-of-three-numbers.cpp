class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
       int multi1=nums[n-1]*nums[n-2]*nums[n-3]; //negative condition me first 2 after sorted then last one give best negative;
       int multi2=nums[0]*nums[1]*nums[n-1];
    //    int ans= max(multi1,multi2);
    //    return ans;
    return(max(multi1,multi2));
    }
};