class Solution {
public:
    int findMin(vector<int>& nums) {
        // int min=nums[0];
        // for(int i=1;i<nums.size();i++){
        //     if(min>nums[i]){
        //         min=nums[i];
        //     }
        // }
        // return min;
        return *min_element(nums.begin(),nums.end());
    }
};