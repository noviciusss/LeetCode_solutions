class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int>chk(nums.begin(),nums.end());
        int total_sum = 0;
        if(nums.size()==1)return nums[0];
        for (int element : chk) {
            if(element>0){
            total_sum += element;}
        }
        if(total_sum==0){
            total_sum=*max_element(nums.begin(),nums.end());
        }
        return total_sum;}
    };