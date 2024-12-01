class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0) return nums;
        // }
        // if(nums.size()==2){
        //     if(nums[0]<0 & nums[1]>0 ){
        //         int temp=nums[0];
        //         nums[0]=nums[1];
        //         nums[1]=temp;
        //     }}
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) {pos.push_back(nums[i]);}
            else {neg.push_back(nums[i]);}
        }
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        return nums;
    }
};